class Solution {
public:
        int findMin(vector<int>& nums) {
    int l=0; int r=nums.size()-1;
    while(l<r)
    {
        int m=l+(r-l)/2;
        if(nums[l]==nums[m] && nums[r]==nums[m]){
            l++,r--;
        }
        else if(nums[r] < nums[m]) l=m+1;
        else r=m;
    }
    return nums[l];
}
};