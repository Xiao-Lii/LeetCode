// Last updated: 1/5/2026, 7:30:14 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squaredNums; 
        for (int i = 0; i < nums.size(); i++){
            int squaredNum = (nums[i] * nums[i]);
            squaredNums.push_back(squaredNum);
        };
        sort(squaredNums.begin(), squaredNums.end());
        return squaredNums;
    }
};