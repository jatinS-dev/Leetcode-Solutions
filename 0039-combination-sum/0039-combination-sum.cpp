class Solution {
    private:
    void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds, set<vector<int>> &s) {
      if (ind == arr.size()) {
        if (target == 0) {
          s.insert(ds);
        }
        return;
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds, s);
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds, s);

    }
    public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector < vector < int >> ans;
        set<vector<int>> s;
      vector < int > ds;
      findCombination(0, target, candidates, ans, ds, s);
     for(auto el:s) {
         ans.push_back(el);
     }
      return ans;
    }
};