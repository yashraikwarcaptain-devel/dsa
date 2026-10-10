#include<iostream>
#include<map>
using namespace std;
int main(){
map<int,string>m ;
m[1]="yash";
m[1]="ray";
m[2]="R";
m.insert({5,"mine"});
for(auto i : m){
    cout<<i.first<<endl;
}
cout<<"finding "<<m.count(2);
m.erase(1);
cout<<"after erase "<<endl;

for(auto i : m){
    cout<<i.first<<" "<<i.second<<endl;
}
auto it  = m.find(is);
for(auto i = it;it =m.end();i++){
    cout<<i.first<<endl;
}
    return 0;
}