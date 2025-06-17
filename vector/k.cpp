#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }

    // Step 2: Use a max heap (priority_queue)
    priority_queue<pair<int, int>> pq; // max heap by default

    for (auto& entry : freq) {
        pq.push({entry.second, entry.first}); // {frequency, number}
    }

    // Step 3: Extract top k frequent elements
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(pq.top().second);
        pq.pop();
    }

    return result;
}

// Main function
int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    
    vector<int> result = topKFrequent(nums, k);
    
    cout << "Top " << k << " frequent elements are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
