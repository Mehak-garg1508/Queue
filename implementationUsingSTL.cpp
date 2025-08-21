// Implementation using STL
#include <iostream>
#include<queue>
using namespace std;
int main(){
  // How to create a queue
  queue<int>q;

  // pushing or inserting element
  q.push(2);
  q.push(4);
  q.push(6);
  q.push(8);
  // delete
  q.pop();

  // size of queue
  cout << q.size() << endl;

  // front element of queue
  cout << q.front() << endl;

  // last element of queue
  cout << q.back() << endl;

  // empty or not
  cout << q.empty() << endl;
}