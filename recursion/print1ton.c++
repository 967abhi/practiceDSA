#include <bits/stdc++.h>
using namespace std;
int fun(yn){
    if(n==0){
        return ;
    }
    fun(n-1);
    cout<<n<<"";
    
}
int main(){
    fun(4);
    return 0;
}