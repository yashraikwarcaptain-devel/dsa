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
    return s;
}
int main(){
int arr[7] = {64, 83, 323, 2, 3, 6, 13};
    cout<<"pivot is "<<pivot(arr,7)<<endl;
}