//  pointer arthmetic in c++
#include<iostream>
using namespace std;
int main(){
    int i=10;
    int *p=&i;
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
     
     cout<<p<<endl;
     p=p-1;
     cout<<p<<endl; 
    //  cout<<p<<endl;

    cout<<"double for "<<endl;
    double d =102.3;
    double *dp=&d;
    cout<<dp<<endl;
    dp++;
    cout<<dp<<endl;




    return 0;

}
