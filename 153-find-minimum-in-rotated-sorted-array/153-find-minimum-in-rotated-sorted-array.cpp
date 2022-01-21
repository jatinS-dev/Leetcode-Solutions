class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        
        if(nums[0] < nums[nums.size()-1])
            return nums[0];
        
        // initially the lowest element is the last element
        int lowest = nums[nums.size()-1];
        
        // Binary Search and update the lowest element
        int left = 0, right = nums.size()-2;
        while(left <= right){
            int mid = left + (right-left)/2;
            
            // update the lowest element
            if(nums[mid] < lowest)
            {
                lowest = nums[mid];
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        
        return lowest;
    }
};