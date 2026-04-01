class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);

        for (int n : nums) {
            count[n] = count[n] + 1;
        }
        for (const auto& input : count) {
            freq[input.second].push_back(input.first);
        }

        vector<int> output;
        for (int i = freq.size() - 1; i > 0; --i) {
            for (int n : freq[i]) {
                output.push_back(n);
                if (output.size() == k) {
                    return output;
                }
            }
        }
        return output;
    }
};
