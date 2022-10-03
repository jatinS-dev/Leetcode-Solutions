class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int ans = 0;
        
        for(int k = 0; k<jewels.length(); k++){
            for(int l = 0;l<stones.length();l++){
                
                if(jewels[k]==stones[l]){
                    ans++;
                }
                
            }
        }
        return ans;
    }
};