#include<bits/stdc++.h>
using namespace std;
bool subset(int arr[], int n , int sum){
    if(n==0)
    return false;
    if(sum==0)
    return true;
    if(arr[n-1]>sum)
    return subset(arr,n-1,sum);
    else
    return subset(arr,n-1,sum)||subset(arr,n-1,sum-arr[n-1]);

}
int main(){
    int arr[]={3,34,4,12,5,2};
    int sum=9;
    int n=sizeof(arr)/sizeof(arr[0]);
    if(subset(arr,n,sum)==true){
        cout<<"found a subset";

    }
    else{
        cout<<" not found subset";
    
    }
    return 0;

}