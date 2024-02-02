class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 2; i < nums.size(); i+=3) {
            if(nums[i] - nums[i-2] <= k) {
                ans.push_back({nums[i-2],nums[i-1],nums[i]});
            } else {
                return {};
            }
        }
        return ans;
    }
};