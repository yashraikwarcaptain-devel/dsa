#include<iostream>
#include<vector>
using namespace std;
int insertion(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
            while(j>=0 && arr[j] >temp){
                arr[j+1]=arr[j];
            j--;
            }arr[j+1] = temp;
    }
}int main(){
    vector<int> arr ={343,12,3463,123,56,23,57,23};
    insertion(arr,arr.size());
    for(int val : arr){
        cout<<val<<endl;
    }cout<<endl;
 return 0;   
}