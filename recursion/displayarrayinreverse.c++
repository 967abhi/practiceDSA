// display array in reverse using recursion 
#include<bits/stdc++.h>
using namespace std;
int displayarray(int arr[],int n, int idx){
    if(idx==n){
        return 1;
    }
    displayarray(arr,n,idx+1);
    cout<<arr[idx];

}
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    displayarray(arr,n,0);
}