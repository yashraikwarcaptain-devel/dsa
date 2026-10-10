#include<iostream>
#include<vector>
using namespace std;
vector<int> wave(vector<vector<int>>& arr,int nrows,int mcols){
vector<int> ans;
for(int col=0 ;col<mcols;col++){
    if(col & 1){
        for(int row =nrows-1 ; row >= 0; row--){
            ans.push_back(arr[row][col]);
        }
    }else{
        for(int row = 0 ; row < nrows ; row++){
            ans.push_back(arr[row][col]);
        }
    }    
    }
return ans;
}
int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{11,22,33,44}};
    int nrows = matrix.size();
    int mcols =matrix[0].size();
    vector<int> result =wave(matrix,nrows ,mcols);
    cout<<"wave Traversal";
    for(int val: result){
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}