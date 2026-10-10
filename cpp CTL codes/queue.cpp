#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<string>q;
q.push("Yash");
q.push("ray");
q.push("R");
cout<<"top element of queue is "<<q.front()<<endl;
q.pop();
cout<<"top element of queue is "<<q.front()<<endl;
cout<<"element size of queue is "<<q.size()<<endl;
cout<<" element is empty now ? 0 = false , 1= true  ans is ----->  "<<q.empty()<<endl;
return 0;
}