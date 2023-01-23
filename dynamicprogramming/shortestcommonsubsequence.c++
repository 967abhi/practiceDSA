#include<bits/stdc++.h>
using namespace std;
int superseq(char*x,char*y, int m, int n ){
    if(!m)
    return n;
    if(!n)
    return m;
    if(x[m-1]==y[n-1])
    return 1+superseq(x,y,m-1,n-1);
    else
    return 1+min(superseq(x,y,m-1,n),superseq(x,y,m,n-1));

}
int main(){
    char x[]="AGGTAB";
    char y[]="GXTXAYB";
    int m=strlen(x);
    int n=strlen(y);
    cout<<superseq(x,y,m,n);
    return 0;

}