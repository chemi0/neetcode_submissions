class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int l = 0, r = heights.size() - 1;

        while (l < r) {
            int currentWidth = r - l;
            int currentHeight = min(heights[l], heights[r]);
            int currentArea = currentWidth * currentHeight;

            maxArea = max(maxArea, currentArea);

            if (heights[l] < heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxArea;
    }
};
