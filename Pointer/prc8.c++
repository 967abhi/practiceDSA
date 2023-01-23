// double pointer in c++
#include<bits/stdc++.h>
using namespace std;
void increment(int **p){
    p=p+1;
    cout<<p<<endl;
}
void increment2(int **p){
    *p=*p+1;
    cout<<p<<endl;
}
void increment3(int **p){
    **p=**p+1;
    cout<<p<<endl;
    

}
int main(){
    int i=10;
    int *p=&i;
    int **p2=&p;
    cout<<p2<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<&i<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    increment(p2);
    increment2(p2);
    increment3(p2);
    return 0;

}