class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> v;
        for ( int i=0; i<n-2&&nums[i]<=0; i++ ){
            if (i>0&&nums[i]==nums[i-1])  continue;
            int j = i+1;
            int k = n-1;
            // cout<<j<<" "<<k<<" ";
            while(j<k){
                if (nums[i]+nums[j]+nums[k]==0){
                    v.push_back({nums[i], nums[j], nums[k]});
                    while(j<k&&nums[j]==nums[j+1])  j++;
                    while(j<k&&nums[k-1]==nums[k])  k--;
                    j++;
                    k--;
                }else  if (nums[i]+nums[j]>-nums[k]){
                    while(j<k&&nums[k-1]==nums[k])  k--;
                    k--;
                }else  {
                    while(j<k&&nums[j]==nums[j+1])  j++;
                    j++;
                }
            }
        }
        return v;
    }
};