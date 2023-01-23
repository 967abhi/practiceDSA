#include<iostream>
using namespace std;
int printdecresingincresing(int n ){
        if(n==0){
            return 1;
        }
        cout<<n<<endl;
        printdecresingincresing(n-1);
        cout<<n<<endl;

}
int main(){
    int n ;
    cout<<"enter the value of n ";
    cin>>n;
    // cout<<n<<endl;
    printdecresingincresing(n);
    // cout<<n<<endl;
    return 0;
}