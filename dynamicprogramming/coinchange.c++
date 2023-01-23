#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n,int m ){
    if(n==0)
    return 1;
    if(n<0)
    return 0;
    if(m==0&&n>=1)
    return 0;
    

    return count(arr,n-1,m)+count(arr,m,n-arr[m-1]);

}
int main(){
    int i,j;
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<count(arr,n,4);
    return 0;

}