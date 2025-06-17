#include<bits/stdc++.h>
using namespace std;
vector <int> twosum(vector<int> &nums,int target){
    for(int i=0;i<nums.size();i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    unordered_map<int,int>m;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;   
    }
    int sum=0;
    for(auto it = m.begin();it!=m.end();it++){
        sum += it->first;
        if(sum == target){
            cout<<it->first<<it->second;
        }
    }
}
int main(){
    vector<int> nums;
    twosum(<2,7,11,15>,9)
    return 0;
}