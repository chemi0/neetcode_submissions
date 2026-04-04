class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;

        while (l < r) {
            int currentSum = numbers[l] + numbers[r];

            if (currentSum == target) {
                return {l + 1, r + 1}; // 0-indexed->1-indexed
            } else if (currentSum > target) {
                r--;
            } else {
                l++;
            }
        }
        return {};
    }
};
