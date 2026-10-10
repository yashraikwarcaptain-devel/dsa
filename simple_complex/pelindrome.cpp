#include<iostream>
using namespace std;
int main(){
    int n,temp=0,last;
    cout<<"write a no. ";
    cin>>n;
    int original = n;
    while(n!=0){
       last= n%10;
        temp = temp*10+last;
       n = n/10;
       }
       cout<<temp<<endl;   
       
       if(temp == original){
       cout<<"it is same just like given no. "<<endl;            
    }else{
        cout<<"no it's not same it's different by given no. "<<endl;
    }   
   return 0; 
}