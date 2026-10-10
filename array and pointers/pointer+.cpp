#include<iostream>
using namespace std;
int main(){
    int num =4;
    cout<<num<<endl;
    int *p =&num;
    cout<<"before "<<num<<endl;
    (*p)++;
    
    cout<<"after "<<num<<endl;
    (*p)--;
    cout<<"after - "<<num<<endl;
    return 0;
}