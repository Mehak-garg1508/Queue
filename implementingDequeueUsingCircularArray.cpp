#include<iostream>
using namespace std;

class Dequeue{
int front, rear, size;
int *arr;
public:
Dequeue(int s){
arr = new int[s];
size =s;
front = rear = -1;
}

bool isEmpty(){
  return front == -1;
}

bool isFull(){
  return (rear+1)%size == front;
}

void push_front(int x){
if(isEmpty()){
front = rear = 0;
arr[front] = x;
cout << arr[front] << " is pushed at front in dequeue."<<endl;
}
else if(isFull()){
  cout << "Dequeue Overflow" << endl;
  return;
}
else{
  front = (front-1+size)%size;
  arr[front] = x;
cout << arr[front] << " is pushed at front in dequeue."<<endl;
}
}

void push_back(int x){
  if(isEmpty()){
    front = rear = 0;
    arr[rear] = x;
cout << arr[rear] << " is pushed at end in dequeue."<<endl;
  }
  else if(isFull()){
    cout << "Dequeue Overflow" << endl;
    return;
  }
  else{
    rear = (rear+1)%size;
    arr[rear] = x;
    cout << arr[rear] << " is pushed at end in dequeue."<<endl;
  }
}

void pop_front(){
  if(isEmpty()){
    cout << "Dequeue Underflow" << endl;
    return;
  }
  else{
    if(front == rear){
      front = rear = -1;
    }
    else{
    cout << arr[front] << " is popped from front in dequeue."<<endl;
      front = (front+1)%size;
    }
  }
}

void pop_back(){
  if(isEmpty()){
    cout << "Dequeue Underflow" << endl;
    return;
  }
  else{
    if(front == rear){
      front = rear = -1;
    }
    else{
    cout << arr[rear] << " is popped from rear in dequeue."<<endl;
      rear = (rear - 1 + size)%size;
    }
  }
}

int start(){
  if(isEmpty())
  return -1;
  else
  return arr[front];
}

int end(){
  if(isEmpty())
  return -1;
  else
  return arr[rear];
}
};

int main(){
Dequeue dq(5);
// 10 20 30 __ 50
dq.push_front(10);
dq.push_front(50);
dq.push_back(20);
dq.push_back(30);
cout << dq.start() << " is start element." << endl;
cout << dq.end() << " is end element." << endl;
// 10 20 __ __ __
dq.pop_front();
dq.pop_back();
cout << dq.start() << " is start element." << endl;
cout << dq.end() << " is end element." << endl;
}