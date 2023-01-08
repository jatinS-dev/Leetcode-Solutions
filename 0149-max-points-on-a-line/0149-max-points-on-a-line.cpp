class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        int n = p.size();
        if(n <= 2) return n;
        int maxi = 2;
        
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                int total = 2;
                for(int k = 0; k < n; k++) {
                    if(k != i && k != j) {
                        if(((p[j][1]-p[i][1]) * (p[i][0] - p[k][0])) == ((p[i][1] - p[k][1]) * (p[j][0] - p[i][0]))) {
                            total++;
                        }
                    }
                    maxi = max(total, maxi);
                }
            }
        }
        return maxi;
    }
};