#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter your string: ";
    cin >> s;
    //cout << "Hello, " <<s<< "!" <<endl;
    unordered_map<char,int> non;
    for(char c:s){
        non[c]++;
    } 
    for(char c:s){
        if(non[c] == 1){
            cout<<c<<endl;
            break;
        }

    }
       return 0;
}