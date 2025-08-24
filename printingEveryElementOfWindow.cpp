// Printing Every Element of Window

#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>q){
  while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
}

int main(){
 int arr[100];
 cout << "Enter the size of array: "<< endl;
 int size;
 cin >> size;
 cout << "Enter the elements of array: "<< endl;
 for(int i = 0; i < size; i++){
  cin >> arr[i];
 }
 int k;
 cout << "Enter the size of window" << endl;
 cin >> k;
 queue<int>q;
 for(int i = 0; i < k - 1; i++){
  q.push(arr[i]);
 }
 for(int i = k-1 ; i < size; i++){
 q.push(arr[i]);
 display(q);
 q.pop();
 }

}