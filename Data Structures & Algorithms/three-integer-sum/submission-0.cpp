class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();

        sort(nums.begin(), nums.end()); 

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            if (nums[i] + nums[i+1] + nums[i+2] > 0) break; 

            int l = i + 1;
            int r = n - 1;
            int target = -nums[i];

            while (l < r) {
                int currentSum = nums[l] + nums[r];

                if (currentSum == target) {
                    result.push_back({nums[i], nums[l], nums[r]});

                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;

                    l++;
                    r--;
                } else if (currentSum < target) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        return result;
    }
};
