class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length();
        int m = t.length();
        int ans1 = 0, ans2 = 0;
        for(int i = 0; i < n; i++) {
            ans1 += s[i] - 'a';
        }
        for(int i = 0; i < m; i++) {
            ans2 += t[i] - 'a';
        }
        char ans = 'a' + (ans2-ans1);
        return ans;
    }
};