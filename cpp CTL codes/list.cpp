#include<iostream>
#include<list>
using namespace std;
int main(){
list<int> l ;
list<int>n(5,100);
cout<<"printing n"<<endl;
for(int i:n){
    cout<<i<<" ";
}cout<<endl;
l.push_back(11);
l.push_back(3);
l.push_back(121);
l.push_back(15);
for (int i :l){
    cout<<i<<endl;
}
cout<<"the size is "<<l.size()<<endl;

l.erase(l.begin());
cout<<"aftr erase"<<endl;
for (int i :l){
    cout<<i<<endl;
}
cout<<"the size is "<<l.size()<<endl;

    return 0;
}