#include<iostream>
#include<array>
using namespace std;
int main(){

array<int,4> a ={3,4,5,6};
int size =a.size();
for(int i =0;i<size;i++){
cout<<a[i]<<endl;
}

cout<<"first element is "<<a.front()<<endl;
cout<<"last element is "<<a.back()<<endl;

cout<<"the element at 2 is "<<a.at(2)<<endl;

cout<<"the array size is  "<<a.size()<<endl;
cout<<"the array after empty function "<<a.empty()<<endl;

     return 0;
}