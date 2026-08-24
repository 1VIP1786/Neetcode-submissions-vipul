class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> table;
        vector<int> ans;

        // Count frequency
        for(int i = 0; i < nums.size(); i++) {
            table[nums[i]]++;
        }

        // Find the most frequent elements
        vector<pair<int, int>> freq;

        for(auto x : table) {
            freq.push_back({x.first, x.second});
        }

        // Sort by frequency
        sort(freq.begin(), freq.end(),
             [](auto &a, auto &b) {
                 return a.second > b.second;
             });

        // Take top k
        for(int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};