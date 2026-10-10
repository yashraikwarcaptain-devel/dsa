#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i= 0;i<n;i++){
        cout<<arr[i]<< " ";
   }
   cout<<endl;
}
void swap(int arr[],int size){
    for(int i =0 ;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={3,5,2,1,5,8,0,9};
    int odd[7] = {3,4,1,6,7,3,8};
     swap(even,8);
     swap(odd,7);
     cout<<endl;
     printarray(even,8);
     printarray(odd,7);
     return 0;
}