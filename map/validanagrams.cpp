#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    unordered_map<char,int> ana;
    for(int i=0;i<s.length();i++){
        ana[s[i]]++;
    }
    cin>>t;
    for(int i=0;i<t.length();i++){
        ana[t[i]]++;
    }
    if(s.length()==t.length()){
        for(auto it:ana){
            if(it.second%2==0){
                cout<<"Anagram";
            }       
            else{
                cout<<"Not anagram";
            }
        }
    }
    else{
        cout<<"Not anagram";
    }
    return 0;
}