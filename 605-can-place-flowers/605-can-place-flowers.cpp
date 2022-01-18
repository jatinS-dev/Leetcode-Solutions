class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int z_cnt = 1;
        int i = 0; 
        int planted_cnt = 0; 
        for(int i = 0; i < flowerbed.size(); i++) {
            if(flowerbed[i] != 0 || i + 1 >= flowerbed.size() ) {
                if(flowerbed[i]  == 0 && i + 1 >= flowerbed.size() ) {
                    z_cnt+=2;
                }
                if(z_cnt != 0) {
                    planted_cnt += (z_cnt-1) / 2; 
                    z_cnt = 0;   
                }               
            } else {
                z_cnt++;  
            }
        }
        if(n > planted_cnt) {
            return false;
        } else {
            return true;
        }
    }
};