#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n ";
    cin>>n;
    int prev=0;
    int prev2=1;
    for(int i=2; i<=n; i++){
        int curri=prev+prev2;
        prev2=prev;
        prev=curri;

    }
    cout<<prev;
    return 0;
    

}