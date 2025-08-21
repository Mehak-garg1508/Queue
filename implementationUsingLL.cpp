// Implementation using Linked list
#include<iostream>
using namespace std;

class Node{
public: 
int data;
Node *next;
Node(int value){
  data = value;
  next = NULL;
}
};

class Queue{
Node *front, *rear;

public:
Queue(){
  front = rear = NULL;
}

bool isEmpty(){
  return front==NULL;
}

void push(int x){
if(isEmpty()){
  front = new Node(x);
  rear = front;
  cout << rear->data << " is pushed into queue" << endl;
}
else{
  rear->next = new Node(x);
  rear = rear->next;
  cout << rear->data << " is pushed into queue" << endl;
}
}

void pop(){
  if(isEmpty()){
    cout << "Queue Underflow" << endl;
    return;
  }
  else{
  cout << front->data << " is popped from queue" << endl;
  Node *temp = front;
  front = front->next;
  delete temp;
  }
}

int start(){
  if(isEmpty()){
    return -1;
  }
  else{
    return front->data;
  }
}
};

int main(){
Queue q;
q.push(1);
q.push(2);
q.push(3);
q.pop();
cout << q.start() << " is start element" << endl;
q.pop();
cout << q.start() << " is start element" << endl;
q.pop();
if(q.isEmpty()){
  cout << "Queue is empty" << endl;
}
}