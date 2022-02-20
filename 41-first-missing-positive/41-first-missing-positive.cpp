class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int out=1; //will be initialized to one and will contain the first missing positive
        int num=0;
     sort(nums.begin(),nums.end()); //sort the array
        
        for(int i=0; i<=nums.size(); i++){         
            if(i==nums.size() || (nums[i]!=out && nums[i]>out)){
                num = out;
                break;           
            }
            else if(nums[i]==out){
                out++;
            }
        }
        return num;
    }
};