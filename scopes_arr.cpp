#include<iostream>
using namespace std;
void update(int arr[],int n ){
    cout<<endl<<"inside the function "<<endl;
    arr[0]=120;
    for(int i=0;i<=3 ;i++){
        cout<<arr[i]<< " ";
    }cout<<endl;
    cout<<"going back to main function "<<endl;
}int main(){
    int arr[3]={2,4,6};
    update(arr,4);
    cout<<endl<<"printing in main function "<<endl;
    for(int i =0 ;i<=3 ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    return 0;
}