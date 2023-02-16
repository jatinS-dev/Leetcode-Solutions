class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int K) {
        for(int i = num.size()-1; i >= 0 && K > 0; i--) {
            num[i] += K;
            K = num[i]/10;
            num[i] %= 10;
        }
        while(K>0) {
            num.insert(num.begin(),K%10);
            K/=10;
        } 
        return num;
    }
};