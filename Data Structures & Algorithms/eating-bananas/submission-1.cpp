class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canFinish(piles, h, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
private:
    bool canFinish(const vector<int>& piles, int h, int k) {
        long long totalHours = 0;
        for (int p : piles) {
            totalHours += (p + k - 1) / (long long)k;
        }
        return totalHours <= h;
    }
};
