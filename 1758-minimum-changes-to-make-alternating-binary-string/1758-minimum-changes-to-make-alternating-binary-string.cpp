class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        string zs = "";
        string os = "";
        for(int i = 0; i < n; i++) {
            if(i%2) {
                os+='0';
                zs+='1';
            } else {
                zs +='0';
                os +='1';
            }
        }
        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < n; ++i) {
            if(s[i]!=zs[i]) cnt0++;
            if(s[i]!=os[i]) cnt1++;
        }
        return min(cnt1, cnt0);
    }
};