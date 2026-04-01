class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            int mres = 1;
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    mres *= nums[j];
                }
            }
            res[i] = mres;
        }
        return res;
    }
};
