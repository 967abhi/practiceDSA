#include<bits/stdc++.h>
using namespace std;
int main(){
    int i =10;
    // int j;
    cout<<&i<<endl;
    int *p= &i;
    cout<< p <<endl;
     float f=10.2;
     float *fp= &f;
     cout<<" float f address :"<<&f<<endl;
     cout<<" the pointer of f is : "<<fp<<endl;
     double d =122.23;
     double *pd= &d;
     cout<<" doble of the d address is: "<<&d<<endl;
     cout<<" double of the pointer address is: "<<pd<<endl;


    return 0;

}