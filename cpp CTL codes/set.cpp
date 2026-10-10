#include<iostream>
#include<set>
using namespace std;
int main(){
set<int>se;
se.insert(1);
se.insert(1);
se.insert(22);
se.insert(4);
se.insert(23);
se.insert(21);
se.insert(5);
se.insert(4);
se.insert(22);
for(int i : se ){
    cout<<"the set contain values is "<<i<<endl;
    } 
    se.erase(se);
for(int i :se){
    cout<<i<<endl;
}cout<<endl;
cout<<"present or not "<<se.count(22);

 return 0;
}