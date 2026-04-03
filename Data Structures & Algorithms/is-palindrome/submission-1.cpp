class Solution {
public:
    bool isPalindrome(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int l = 0, r = s.size() - 1;

        while (l < r) {
            while (l < r && !isalnum(s[l])) l++;
            while (l < r && !isalnum(s[r])) r--;

            if (l < r) {
                char charL = s[l];
                char charR = s[r];

                if (charL != charR) {
                    if (tolower(charL) != tolower(charR)) {
                        return false;
                    }
                }
                l++;
                r--;
            }
        }
        return true;
    }
};
