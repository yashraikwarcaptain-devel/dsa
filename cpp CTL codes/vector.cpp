#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(1);
v.push_back(22);
v.push_back(2);
v.push_back(12);
v.push_back(44);
v.push_back(5);
v.push_back(86);
cout<<"before pop the value is this ->"<<endl;

for(int i:v){
    cout<<i<<endl;
}
cout<<"the size is "<<v.size()<<endl;

cout<<"the first value is "<<v.front()<<endl;
cout<<"the last value is "<<v.back()<<endl;

cout<<"the value at 1 is "<<v.at(1)<<endl;

cout<<"before pop the value is"<<endl;
for (int i:v){
    cout<<i<< " ";
}v.pop_back();
cout<<"after pop the value is"<<endl;
for (int i:v){
    cout<<i<< " ";
}


v.clear();
cout<<"the value after clear is "<<v.size()<<endl;

    return 0;
}