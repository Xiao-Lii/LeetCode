class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> sumTotals;
        int numLength = nums.size();
        for(int index = 0; index < numLength; index++){
            sum += nums[index];
            sumTotals.push_back(sum);
        };
        return sumTotals;
    }
};