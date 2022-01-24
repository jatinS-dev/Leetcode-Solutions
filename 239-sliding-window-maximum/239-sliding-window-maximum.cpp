class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> v;
    vector<int> ans;
    int i=0,j=0;
    while(j<nums.size()){
        while(v.size()>0 and v.back()<nums[j]){
            v.pop_back();
        }
        v.push_back(nums[j]);
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            ans.push_back(v.front());
            if(nums[i]==v.front()){
                v.pop_front();
            }
            i++;
            j++;
        }
    }
    return ans;
    }
};