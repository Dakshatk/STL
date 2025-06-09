#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> m1;
    m1.insert({1,3});

    for(auto it:m1){
        cout<<it.first<<"->"<<it.second;
    }
    return 0;
}