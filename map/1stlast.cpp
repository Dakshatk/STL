#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int start = -1;
    int end = -1;
    
    for(int i=0;i<n;i++){
        if(a[i] == x){
            if(start == -1){
                start = i;
            }
            end = i;
        }
    }
        if(start == -1){
            cout<<"Element not found"<< endl;
        } 
        else{
            cout<<start<<","<<end;
        }
    return 0;
}