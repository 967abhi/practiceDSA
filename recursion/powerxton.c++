#include<iostream>
using namespace std;
int power(int x, int n ){
    if(n==0){
        return 1;

    }
    int xn=x*power(x,n-1);
    return xn;
}
int main(){
    int x,n;
    cout<<" enter the value of x and n ";
    cin>>x>>n;
    cout<<power(x,n);
    return 0;
}