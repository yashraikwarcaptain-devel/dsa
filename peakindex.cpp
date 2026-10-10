#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int s = 0;
    int e=n-1;
while(s<e){
    int mid = s + (e - s) / 2;
    if(arr[mid]<arr[mid+1]){
        s = mid+1;
    }
    else{
        e = mid;
    }
    mid = s+(e-s)/2;
}
return s;
}
int main(){
    int arr[5]= {1,53,23,54,2};
    cout<<"the peak value is "<<peak(arr,5)<<endl;
    return 0;
}