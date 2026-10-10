#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int start =0;
    int end =n -1;
while(start <= end)
{
int mid = start+(end -start)/2;
    if(arr[mid]==key){
        return mid;
    }
   if (key > arr[mid]){
    start= mid +1;
   } 
   else{
    end =mid-1;
   }
}
return -1;
}
int main(){
    int even[6] ={1,4,7,2,22,42};
    int target =22;
    int index = binary(even,6,target);

cout<<"the target number is "<<target <<"index of is "<<index<<endl;
return 0;
}