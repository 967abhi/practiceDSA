#include<iostream>

using namespace std;
void toh(int n , int A , int B, int C){
    if(n==0){
        return ;
    }
    toh(n-1,A,C,B);
    cout<<(n , A + " -> " + B  );
    toh(n-1,C,B,A);
}
int main(){
    int n,A,B,C;
    cout<<" enter the value of n A BC ";
    cin>>n;
    toh(n,A,B,C);
    return 0;
}