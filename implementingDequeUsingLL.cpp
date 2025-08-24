#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next, *prev;
Node(int value){
  data = value;
  prev = next = NULL;
}
};

class Deque{
Node *front, *rear;
public:
Deque(){
  front = rear = NULL;
}

void push_front(int x){
  if(front == NULL){
    front = rear = new Node(x);
    cout << front->data << " is inserted at front of dequeue." << endl;
    return;
  }
  else{
    Node *temp = new Node(x);
    temp->next = front;
    front->prev = temp;
    front = temp;
    cout << front->data << " is inserted at front of dequeue." << endl;
    return;
  }
}

void push_back(int x){
  if(front == NULL){
    front = rear = new Node(x);
    cout << rear->data << " is inserted at back of dequeue." << endl;
    return;
  }
  else{
    Node *temp = new Node(x);
    rear->next = temp;
    temp->prev = rear;
    rear = temp;
    cout << rear->data << " is inserted at back of dequeue." << endl;
    return;
  }
}

void pop_front(){
  if(front == NULL){
    cout << "Dequeue Underflow" << endl;
    return;
  }
  else{
  Node *temp = front;
  front = front->next;
  cout << temp->data << " is popped from front of dequeue." << endl;
  delete temp;
  if(front)
  front->prev = NULL;
  else
  rear = NULL;
  }
}

void pop_back(){
  if(front == NULL){
  cout << "Dequeue Underflow" << endl;
  return;
  }
  else{
    Node *temp = rear;
    rear = rear->prev;
    cout << temp->data << " is popped from back of dequeue." << endl;
    delete temp;
    if(rear){
      rear->next = NULL;
    }
    else
    front = NULL;
  }
}

int start(){
  if(front == NULL){
    return -1;
  }
  else{
    return front->data;
  }
}

int end(){
  if(front == NULL){
    return -1;
  }
  else{
    return rear->data;
  }
}

};

int main(){
Deque dq;
// 6 4 2 4 8
dq.push_front(2);
dq.push_front(4);
dq.push_front(6);
dq.push_back(4);
dq.push_back(8);
cout << dq.start() << " is starting element." << endl;
cout << dq.end() << " is last element." << endl;
// 4 2 4
dq.pop_front();
dq.pop_back();
cout << dq.start() << " is starting element." << endl;
cout << dq.end() << " is last element." << endl;
}