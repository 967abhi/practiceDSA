#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    // vec.reserve(100);
    for(int i=0; i<999; i++){
    vec.push_back(i);
    cout<<"Size."<<vec.size()<<" capacity: "<<vec.capacity()<<endl;
    }
    return 0;


}