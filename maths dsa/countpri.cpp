#include<iostream>
#include<vector>
using namespace std;
class a{
    public:
    int count(int n){
    if(n<=2)
    return 0;
        int cnt =0;
        vector<bool> prime(n,true);
        prime[0] = prime [1]=false;
        for(int i =2;i<n;i++){
            if(prime[i]){
                cnt++;
                for(long long j =1ll * i * i; j<n ;j += i){
                    prime[j] =false;
                }
            }
        } 
        return cnt;
    }
};
int main(){
    a a1;
    int n=12;
    cout<<"count of prime "<<n <<"is: " <<a1.count(n)<<endl;
    return 0 ;
}