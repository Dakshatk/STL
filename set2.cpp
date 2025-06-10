#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter your string: ";
    cin >> s;
    unordered_set<char> uni;
    for(char c:s){
        uni.insert(c);
    }
    for(char c:uni){
        cout<<c<<endl;
    }
    
    
       return 0;
}