class Solution {
public:
    int cnt1(string str) {
        int n = str.size();
        int word = 1;
        for(int i = 0; i < n; ++i) {
            if(str[i] == ' '){
                word++;
            }
        }
        return word;
    }
    int mostWordsFound(vector<string>& line) {
        
        int max_cnt = INT_MIN;
        int cnt = 0;
        for(auto it : line) {
            cnt = cnt1(it);
            max_cnt = max(cnt, max_cnt);
        }
        return max_cnt;
    }
};