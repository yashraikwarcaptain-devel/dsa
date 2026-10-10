#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void select(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[minindex])
            minindex =j;
        }
    swap(arr[minindex],arr[i]);
    }
}
int main(){
    vector<int> arr ={2,53,23,3,34};
select(arr,arr.size());
    for(int val : arr){
        cout<<val<<endl;;
    }
    cout<<endl;
    return 0;
}