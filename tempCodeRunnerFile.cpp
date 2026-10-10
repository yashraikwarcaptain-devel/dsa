#include<iostream>
using namespace std;
int pivot(int arr[],int n){
   int s=0;
    int e = n-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]>=arr[0]){
        s =mid+1;
    }else{
        
       e = mid ;
     }
 }
    return 0;
}
int main(){
    int arr[7] ={3,64,323,823,2,6,13};
    cout<<"pivot is "<<pivot(arr,6)<<endl;
}