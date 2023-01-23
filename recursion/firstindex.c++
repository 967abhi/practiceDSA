#include<iostream>
using namespace std;
int lastindex(int arr[], int idx, int data){
    if(arr[idx]==data){
        cout<<arr[idx];
    }
    else{
        cout<<-1;
    }

}
int main(){
    int n ;
    int data;
    cin>>n;
    cin>>data;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin>>arr[i];

    }
   cout<<lastindex(arr,0 ,data);
    return 0;
}