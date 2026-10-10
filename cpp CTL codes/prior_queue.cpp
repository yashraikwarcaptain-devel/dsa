#include<iostream>
#include<queue>
using namespace std;
int main(){
priority_queue<int>pr;

pr.push(1);
pr.push(5);
pr.push(6);
pr.push(8);
int n = pr.size();
for(int i =0 ;i<= n;i++){
    cout<<pr.top()<<endl;
    pr.pop();
}cout<<endl;
cout<<"the prior queue is empty or not "<<pr.empty()<<endl;
    return 0;
}