// Implementation using array
#include<iostream>
using namespace std;

class Queue{
int *arr;
int front, rear;
int size;
public:
Queue(int s){
  arr = new int[s];
  size = s;
  front = rear = -1;
}

bool isEmpty(){
  if(front == -1){
    return 1;
  }
  return 0;
}

bool isFull(){
  return rear == size - 1;
}

void push(int x){
  if(isEmpty()){
    front = rear = 0;
    arr[rear] = x;
    cout << arr[rear] << " is pushed into queue" << endl;
  }
  else if(isFull()){
    cout << "Queue Overflow" << endl;
    return;
  }
  else{
    rear = rear + 1;
    arr[rear] = x;
    cout << arr[rear] << " is pushed into queue" << endl;
  }
}

void pop(){
  if(isEmpty()){
    cout << "Queue Underflow" << endl;
    return;
  }
  else{
    if(front == rear){
      cout << arr[front] << " is popped from Queue" << endl;
      front = rear = -1;
    }
    else{
      cout << arr[front] << " is popped from Queue" << endl;
      front = front + 1;
    }
  }
}

int start(){
  if(isEmpty()){
    cout << "Queue is Empty" << endl;
    return -1;
  }
  else{
    return arr[front];
  }
}

};

int main(){
Queue q(5);
q.push(1);
q.push(2);
q.push(3);
q.pop();
cout << "Starting Element of Queue is: " << q.start() << endl;
q.pop();
q.pop();
if(q.isEmpty())
cout << "Queue is Empty()"<< endl; 
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.push(6);
if(q.isFull()){
  cout << "Queue is full" << endl;
}
}