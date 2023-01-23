#include<bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void bubblesort(int arr[], int n ){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++)
        if(arr[j]>arr[j+1]) {
            swap(&arr[j],&arr[j+1]);

        }   }
} 
void printarray(int arr[], int n){
  for(int i=0; i<n; i++)
  {
      cout<<arr[i]<<endl;

  }
}
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;

}