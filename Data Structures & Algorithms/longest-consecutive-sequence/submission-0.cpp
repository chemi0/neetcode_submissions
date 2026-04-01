class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numsSet(nums.begin(), nums.end());
        int longestStreak = 0;

        for (int num : nums) {
            if (numsSet.find(num - 1) == numsSet.end()) {
                int length = 1;
                while (numsSet.find(num + length) != numsSet.end()) {
                    length++;
                }
                longestStreak = max(longestStreak, length);
            }
        }
        return longestStreak;
    }
};
