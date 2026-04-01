class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ind;

        for (int i = 0; i < nums.size(); i++) {
            ind[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int differ = target - nums[i];
            if (ind.count(differ) && ind[differ] != i) {
                return {i, ind[differ]};
            }
        }

        return {};
    }
};
