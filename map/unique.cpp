#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> unique;
    for(int i=0;i<n;i++){
        unique[a[i]]++;
    }
    for(auto it:unique){
        if(it.second==1){
            cout<<it.first<<endl;
        }
    }
    return 0;
}