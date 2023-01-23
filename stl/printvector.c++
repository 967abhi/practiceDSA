#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec {1,2,3,4,5};
    for(auto it=0;it<=vec.size(); it++){
        cout<<vec.at(it)<<endl;
    }
    return 0;

}