#include<iostream>
using namespace std;
void puzz(int n){
    if(n==0){
        return ;
    }
    cout<<(n)<<endl;
    puzz(n-1);
    cout<<(n)<<endl;
    puzz(n-1);
    cout<<(n)<<endl;
}
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    puzz(n);
    return 0;
}