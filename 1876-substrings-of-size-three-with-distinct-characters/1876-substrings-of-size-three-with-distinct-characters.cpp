class Solution {
public:
    int countGoodSubstrings(string s) {
        int i = 0, j = 1, k = 2, cnt = 0;
        int n = s.length();
        while(i < n - 2) {
            if(s[i] != s[j] && s[j] != s[k] && s[i] != s[k]) {
                cnt++;
            }
            i++;
            j++;
            k++;
        }
        return cnt;
    }
};