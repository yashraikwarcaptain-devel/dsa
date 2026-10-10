#include<iostream>
using namespace std;
int firstocc(int arr[],int n , int key){
    int s= 0,e=n-1;
    int ans = -1;
    while(s<=e){
            int mid = s+(e-s)/2;
        if(arr[mid]==key){
            ans =mid;
            e =mid-1;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        else {
            e =mid -1 ;
        }
    }return ans;
}
int lastocc(int arr[],int n,int key){
    int s= 0,e=n-1;
    int ans =-1 ;
while (s<=e){
        int mid =s+(e-s)/2;
    if(arr[mid]==key){
        ans =mid;
        s = mid+1;
    }
    else if (key>arr[mid]){
        s  = mid +1;   
    }
    else {
        e = mid -1;
    }
}return ans ;
}
int main(){
int even[11] = {4, 12, 35, 65, 23, 12, 2, 42, 66, 23, 2};
    int target = 12;
    cout<<"first occurance "<<firstocc(even,11,target)<<endl;
    cout<<"\n last occurance "<<lastocc(even,11,target)<<endl;
    return 0;
}