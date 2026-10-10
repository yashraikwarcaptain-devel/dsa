#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i =0;i<=key;i++){
        if(arr[i]==key ){
            return 1 ;
        }
    }return 0;
}
int main(){
    int arr[10] ={10,42,20,30,45,53,76,20,100,43};
    cout<<"enter the element to search for "<<endl;
    int key;  // key is that element which we going to find in array ^_^
    cin>>key ;
    bool found = search(arr,10,key);
    if(found){
        cout<<"it is present in giving array list "<<endl<<endl;
    }
else{
        cout<<"it is not present in giving array list "<<endl<<endl;
}    
    return 0;
}