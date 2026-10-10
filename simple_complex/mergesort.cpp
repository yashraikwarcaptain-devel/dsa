#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int n,int arr2[],int m ,int arr3[]){
    int i = 0,j=0;
    int k=0;
    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            arr3[k++]=arr[i++];
        }
        else{arr3[k++]=arr2[j++];}
    }while(i<n){
        arr3[k++] = arr[i++];}
    while(j<m){
        arr3[k++]=arr2[j++];
    }
}
void prt(int ans[],int n ){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr[5] = {1,3,5,7,8};
    int arr2[3]={2,4,6};
    int arr3[8];
    merge(arr,5,arr2,3,arr3);
    prt(arr3,8);
    return 0;
}