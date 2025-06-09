#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1;
    for(int i=0;i<5;i++){
        v1.push_back(i);
    }
    //insertion //deletion //size of vector
    // for(auto it:v1){
    //     v1.push_back(2);
    // }    cout<<endl;

    // v1.insert(v1.begin(),5);
    //  cout<<endl;
    // for (auto it:v1){
    //     v1.insert(v1.end(),6);
    // }
    //     cout<<endl;
    for (auto it:v1){
        cout<<it;
    }
    cout<<v1.size();
    for(int i=0;i<5;i++){
        v1.pop_back();
    }
    for (auto it:v1){
        cout<<it;
    }
    
    
    
   
    return 0;    
}