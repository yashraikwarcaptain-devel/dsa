#include<iostream>
using namespace std;

bool present(int arr[][4],int target ,int row ,int col){
    for(int i= 0 ; i<row;i++){
        for(int j= 0 ;j<col;j++){
            if(arr[i][j]==target){
                return true;
            } 
            
        }
    }return false;
            
    }
int main(){
    int arr[3][4] = {{2,3,4,5},{1,3,5,7},{2,4,6,8}};
    int target ;
    for(int i= 0 ; i<3;i++){
        for(int j= 0 ;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }cin>>target ;
if (present(arr, target, 3, 4)) {
        cout << "Element " << target << " is present." << endl;
    } else {
        cout << "Element " << target << " is not present." << endl;
    }
 
    return 0;
}