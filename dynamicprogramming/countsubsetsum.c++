
# include<bits/stdc++.h>
using namespace std;
int countsum(int arr[], int n , int sum){
    if(n==0)
    return false;
    if(sum==0)
    return true;
    if(arr[n-1]>sum)
    return countsum(arr,n-1,sum);
    
}
int main(){
    int arr[]={1,2,3,3};
    int sum=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countsum(arr,n,sum)<<endl;
    return 0;
}