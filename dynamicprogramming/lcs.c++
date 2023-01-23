#include<bits/stdc++.h>
using namespace std;
int lcs(char*x,char*y, int m , int n ){
    if(m==0||n==0)
    return 0;
    if(x[m-1]==y[n-1])
    return 1+lcs(x,y,m-1,n-1);
    else
    return max(lcs(x,y,m,n-1),lcs(x,y,n,m-1));

}
int main(){
    char x[]="AGGTAB";
    char y[]="GXTXAYB";
    int m=strlen(x);
    int n=strlen(y);
    cout<<"lcs is "<<lcs(x,y,m,n);
    return 0;
}