#include<iostream>
using namespace std;
int printdecreasing(int n ){
    if(n==0){
        return ;

    }
    cout<<n<<endl;
    printdecreasing(n-1);

}
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    printdecreasing(n);
    return 0;

}