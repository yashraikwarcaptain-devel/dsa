#include<iostream>
#include<vector>

using namespace std;
int bubble(vector<int>&arr,int n){
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}int main(){
    vector<int>arr ={32,5,2,1234,342,523,123};
    bubble(arr,arr.size());
    for(int val: arr){
        cout<<val<<endl;
    }
cout<<endl;
    return 0;
}