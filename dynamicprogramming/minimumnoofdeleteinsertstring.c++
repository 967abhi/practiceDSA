#include<bits/stdc++.h>
using namespace std;
int lcs(string str1, string str2, int m ,int n ){
    int l[m+1][n+1];
    int i,j;
    for(int i=0; i<=m; i++)
    for(int j=0; j<=n; j++)
    if (i==0||j==0)
    l[i][j]=0;
    else if(str1.at(i-1)==str2.at(j-1))
    l[i][j]=1+l[i-1][j-1];
    else
    l[i][j]=max(l[i-1][j],l[i][j-1]);

    return l[m][n];


}
void printmindel(string str1, string str2){
    int m=str1.size();
    int n =str2.size();
    int len=lcs(str1,str2,m,n);
    cout<<(m-len)<<endl;
    cout<<(n-len)<<endl;

}
int main(){
     string str1="heap";
     string str2="pea";
     printmindel(str1,str2);
     return 0;
}