class Solution {
public:
    bool canReach(vector<int>& arr, int cur) {
        if(cur < 0 || cur >= size(arr) || arr[cur] < 0) return false;
        arr[cur] *=-1;
        return !arr[cur] || canReach(arr, cur+arr[cur]) || canReach(arr, cur-arr[cur]);
    }
};