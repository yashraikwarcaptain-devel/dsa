#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string>s;
s.push("Yash");
s.push("ray");
s.push("R");
cout<<"top element of stack is "<<s.top()<<endl;
s.pop();
cout<<"top element of stack is "<<s.top()<<endl;
cout<<"element size of stack is "<<s.size()<<endl;
cout<<" element is empty now ? 0 = false , 1= true "<<s.empty()<<endl;
return 0;
}