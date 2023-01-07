class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> diff;
        
        for(int i = 0; i < gas.size(); i++) {
            int temp = gas[i] - cost[i];
            diff.push_back(temp);
        }
        int sum = accumulate(diff.begin(), diff.end(), 0);
        if(sum < 0) return -1;
        
        int index = 0, total = 0;
        
        for(int i = 0; i < gas.size(); i++) {
            total += gas[i] - cost[i];
            if(total < 0) {
                total = 0;
                index = i + 1;
            }
        }
        
        return index;
    }
};