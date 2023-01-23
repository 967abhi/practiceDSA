#include<bits/stdc++.h>
using namespace std;
string x,y;
int lcs(int i, int j , int count ){
    if(i==0||j==0)
    return 0;
    if(x[i-1]==y[j-1])
    count =lcs(i-1,j-1,count+1);

    count = max(count,max(lcs(i,j-1,0),lcs(i-1,j,0)));
    return count ;

}
int main(){
    int n,m;
    x="abcdxyz";
    y="xyzabcd";

    m=x.size();
    n=y.size();
    cout<<lcs(m,n,0);
    return 0;
}
