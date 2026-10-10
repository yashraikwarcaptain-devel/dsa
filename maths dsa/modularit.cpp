#include<iostream>
using namespace std;
long long modul(long long x,long long n,long long m ){
    if(m==1)
    return 0;
    long long res=1;
    x = x % m;
    while(n>0){
        if(n & 1){
            res=(1ll*res*x) % m;
        }
    x=(1ll * x * x)%m;    
    n >>=1;
    }
    return res;
}
    int main(){
        long long base =3, exp =13, mod =7;
        cout<<base<<"^"<<exp<<"% "<<mod<<"="<<modul(base,exp,mod)<<endl;
    return 0;
}