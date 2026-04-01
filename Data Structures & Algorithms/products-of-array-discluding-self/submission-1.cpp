class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int mres = 1, zCount = 0;
    for (int num : nums) {
        if (num != 0) {
            mres *= num;
        } else {
            zCount++;
        }
    }

    if (zCount > 1) {
        return vector<int>(nums.size(), 0);
    }

    vector<int> res(nums.size());
    for (size_t i = 0; i < nums.size(); i++) {
        if (zCount > 0) {
            res[i] = (nums[i] == 0) ? mres : 0;
        } else {
            res[i] = mres / nums[i];
        }
    }
    return res;

    }
};
