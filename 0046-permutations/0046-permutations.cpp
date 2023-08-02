class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<bool> vis(nums.size());
        vector<int> curr;

        backtrack(ans, nums, curr, vis);
        return ans;
    }
private:
    void backtrack(vector<vector<int>> &ans, vector<int>& nums, vector<int>& curr, vector<bool> &vis) {
        if(curr.size() == nums.size()) {
            ans.push_back(curr);
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(vis[i] == true) {
                continue;
            }
            curr.push_back(nums[i]);
            vis[i] = true;
            backtrack(ans, nums, curr, vis);
            curr.pop_back();
            vis[i] = false;
        }      
    }
};