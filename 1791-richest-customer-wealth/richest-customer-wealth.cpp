class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> totalWealth;
        vector<int> customerTotals;
        
        for (int i = 0; i < accounts.size(); i++){
            int customerWealth = 0;
            for (int j = 0; j < accounts[i].size(); j++){
                customerWealth += accounts[i].at(j);
            }
            customerTotals.push_back(customerWealth);
        }
        
        int highestWealth = 0;
        for (int n = 0; n < customerTotals.size(); n++){
            if (highestWealth < customerTotals[n]){
                highestWealth = customerTotals[n];
            };
        }
        return highestWealth; 
    }
};