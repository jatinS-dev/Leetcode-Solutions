class Solution {
public:
    bool isPowerOfFour(int n) {
        return  n  > 0 && floor(log(n)/log(4)) == ceil(log(n)/log(4));
    }
};