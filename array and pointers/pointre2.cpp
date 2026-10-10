#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,4,6 };
cout<<"block "<<arr<<endl;
cout<<arr[1];
cout<<"&arr[0] "<<&arr[0]<<endl;
cout<<"&arr "<<&arr<<endl;
cout<<"&arr+1  "<<&arr+1<<endl;
cout<<"arr+1  "<<arr+1<<endl;
cout<<"&arr+2  "<<&arr+2<<endl;
cout<<"arr+2  "<<arr+2<<endl;
int i=3;
arr[i] =*(arr+i);
cout<<"i[arr] "<<i[arr]<<endl;
int temp[10];
cout<<"size of (temp )  "<<sizeof(temp)<<"by "<<endl;
int *ptr = &temp[0];
cout<<"size of (*ptr) "<<sizeof(*ptr)<<endl;
cout<<<"size of (&ptr ) "<<sizeof(&ptr)<<endl;
cout<<"sizeof(*temp) "<<sizeof(*temp)<<endl;

return 0;
}