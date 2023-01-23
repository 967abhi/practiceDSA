#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){
            cout<<true;
            
        }
        else if(n%4==0){
            cout<<true;
        }
        else{
            cout<<false;
        }
        
    }
};
int main(){
    int n;
    cout<<" enter the value of n ";
    cin>>n;
  int m= isPowerOfFour(n);
  cout<<m;
    return 0;

}