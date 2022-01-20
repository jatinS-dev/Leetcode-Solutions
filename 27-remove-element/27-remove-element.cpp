class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int k=0,i=0,j=size-1;
        while(i<=j){
            if(nums[i]==val){
                k++;
                swap(nums[i],nums[j--]);
            }else i++;
        }
        return size-k;
    }
};