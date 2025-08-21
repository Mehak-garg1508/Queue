// Implementation of Queue using Circular array, Circular Queue
#include<iostream>
using namespace std;

class Queue{
int *arr;
int front , rear;
int size;
public:
Queue(int s){
  arr = new int[s];
  front = rear = -1;
  size = s;
}

bool isEmpty(){
  return front==-1;
}

bool isFull(){
  return front == (rear+1)%size;
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
    rear = (rear+1)%size;
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
      cout << arr[front] << " is popped from queue" << endl;
      front = rear = -1;
    }
    else{
      cout << arr[front] << " is popped from queue" << endl;
      front = (front + 1)%size;
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
q.pop();
q.push(4);
q.push(5);
q.push(6);
q.push(7);
if(q.isFull()){
  cout << "Queue is Full" << endl;
}
}