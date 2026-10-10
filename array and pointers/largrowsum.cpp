#include<iostream>
#include<climits>
using namespace std;
int large(int arr[][3],int row ,int col){
    int maxi = INT_MIN;
    int rowind = -1;
    for(int i = 0; i<row;i++){
        int sum = 0;
        for(int j = 0;j<col;j++){
            sum +=arr[i][j];
        }cout<<"summ of row is "<<i<<" "<<sum<<endl;
    if(sum>maxi){
    maxi=sum;
    rowind = i ;
}
    }
cout <<"the maximum no. is "<<maxi<<"  at row is  "<<rowind<<endl;
return maxi;
}int main(){
    int arr[3][3] ={{2,3,6},{12,5,6},{2,6,9}};
   int ans =large(arr,3,3);
   cout<<endl<<"maximum "<<ans<<endl;
   return 0;
}