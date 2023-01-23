#include<bits/stdc++.h>
using namespace std;
void calculatespan(int arr[], int n, int s[]){
    s[0]=1;
    for(int i=1; i<n; i++){
        s[i]=1;
        for(int j=i-1; (j>=0)&&(arr[i]>=arr[j]);j--)
        s[i]++;
    }
}
void printarray(int s[], int n ){
    for(int i=0; i<n; i++)
    cout<<s[i]<<" ";

}
 
int main(){
    int arr[]={10,4,90,120,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s[n];
    calculatespan(arr,n,s);
    printarray(s,n);

}