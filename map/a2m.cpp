#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={10,20,50,40,50};
    map<int,int> m;
    for(int i=0;i<5;i++){
        m[a[i]]++;
    }
    for(auto i:m){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    return 0;
}