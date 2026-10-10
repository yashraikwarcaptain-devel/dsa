#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(){
vector<int>v;

v.push_back(3);
v.push_back(4);
v.push_back(2);
v.push_back(5);
v.push_back(6);

cout<<"finding 3 -->   "<<binary_search(v.begin(),v.end(),3)<<endl ;
 cout << "finding 6 --> " << binary_search(v.begin(),v.end(),6)<< endl;
cout << "lower bound (index): " << (lower_bound(v.begin(), v.end(), 3) - v.begin()) << endl;
cout<<"lower bound "<<(lower_bound(v.begin(),v.end(),3) - v.begin())<<endl ;
cout<<"upper bound "<<(upper_bound(v.begin(),v.end(),3) - v.begin())<<endl;

    return 0;
}