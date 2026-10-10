#include<iostream>
using namespace std;
void sum(int arr[][3],int i ,int j){
    for(int i=0;i<3;i++){
        int rowsum =0;
        for(int j =0;j<3;j++){
            rowsum+=arr[i][j];
        }
        cout<<i<<" : "<<rowsum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][3];
    cout<<"write 9 no.  "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }cout<<endl;
    }
    sum(arr,3,3);
    return 0;
}