#include<iostream>
using namespace std;
long long int binary(int n){
int start = 0;
int end = n;
int ans =-1;
while(start<=end){
    long long int mid =start+(end-start);
    long long sqt = mid*mid;
    if(sqt == n){
        return mid;
    }
    if(sqt < n){
     ans = mid;
       start =mid+1;
    }
else{
    end =mid-1;
}
}return ans;
}
int mysrt(int x){
    return binary(x);
}

int main(){
int n=27;
cout<<"the root of "<<n <<"is "<<mysrt(n)<<endl;
    return 0;
}