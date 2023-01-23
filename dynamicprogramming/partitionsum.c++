#include<bits/stdc++.h>
using namespace std;
bool subset(arr,n,sum){
    if(n==0)
    return false;
    if(sum==0)
    return true;
    if(arr[n-1]>sum){
    return subset(arr,n-1,sum);}

    else{
    return subset(arr,n-1,sum)||subset(arr,n-1,sum-arr[n-1]);
    }
}
bool findpartition(arr,n){
    int sum=0;
    for(int i=0; i<n; i++)
    sum=sum+arr[i];
    if(sum%2==0)
    return false;
    return subset(arr,n,sum/2);
}
int main(){
    int arr[]={3,1,5,9,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(findpartition(arr,n)==ture)
    cout<<"yes";
    else
    cout<<"no";
    return 0;

}