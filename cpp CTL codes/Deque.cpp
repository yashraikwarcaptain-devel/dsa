#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> d;
d.push_back(2);
d.push_back(53);
d.push_back(13);
d.push_back(3);
d.push_back(42);
for(int i:d){
    cout<<i<<endl;
}
d.pop_front();
cout<<endl;
for(int i:d){
    cout<<i<<endl;
}

cout<<"the value at 1 is "<<d.at(1)<<endl;

cout<<"the value at first is  is "<<d.front()<<endl;
cout<<"the value at last is "<<d.back()<<endl;

cout<<"the size is"<<d.size()<<endl;

cout<<"before erase is "<<d.size()<<endl;
cout<<"the empty now"<<d.empty()<<endl;

d.erase(d.begin(),d.begin()+1);
cout<<"after erase is "<<d.size()<<endl;
    return 0 ;
}