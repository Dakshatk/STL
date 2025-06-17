#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    set<int>s;
    for(int i=0;i<n1;i++){
        s.insert(a1[i]);
    }
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    set<int>result;
    for(int i=0;i<n2;i++){
        if(s.find(a2[i])!=s.end()){
            result.insert(a2[i]);
        }
    }
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}