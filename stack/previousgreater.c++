#include<bits/stdc++.h>
using namespace std;
void previousgreat(int arr[], int n ){
    cout<<"-1,";
    for(int i=1; i<n;i++){
        int j;
        for( j=i-1; j>=0; j--){
          if(arr[i]<arr[j])
          {
              cout<<arr[j]<<" ";
              break;
          }
        }
        if(j==-1)
        cout<<"-1,";

    }
}
int main(){
    int arr[]={10,4,2,20,40,12,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    previousgreat(arr,n);
    return 0;
}