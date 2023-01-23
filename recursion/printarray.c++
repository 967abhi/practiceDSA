// printing array by using recursion 
#include<iostream>
using namespace std;
void displayArray(int arr[], int idx){
    if(idx==arr[idx]){
        return ;
    }
    cout<<arr[idx]<<endl;
    displayArray(arr,idx+1);

}
int main(){
    int n ;
    cout<<" enter the size of n ";

    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    displayArray(arr,0);

}