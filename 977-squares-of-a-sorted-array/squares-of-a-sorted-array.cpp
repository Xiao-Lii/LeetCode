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
