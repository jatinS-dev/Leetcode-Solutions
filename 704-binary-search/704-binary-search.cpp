class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid, l = 0, h = nums.size() - 1;
        while (l <= h) {
        mid = l + (h - l) / 2;
        if (nums[mid] == target) return mid;
        if (target < nums[mid]) h = mid - 1;
        else l = mid + 1;
    }
    return -1;
    }
};