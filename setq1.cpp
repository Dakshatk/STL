#include<iostream>
#include<set>
using namespace std;
int main(){
    int i,a[6]={};
        for(int i=0;i<6;i++){
            cin>>a[i];
        }
        set<int>b;
        for(int i=0;i<6;i++){
            b.insert(a[i]);
        }
        cout<<endl;
            cout<<b.size();
        for(auto it:b){
            cout<<it<<" ";
        }
    return 0;
}