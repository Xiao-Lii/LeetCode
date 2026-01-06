// Last updated: 1/5/2026, 7:30:15 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> totalWealth;
        vector<int> customerTotals;
        // int accountLength = accounts.size();
        for (int i = 0; i < accounts.size(); i++){
            int customerWealth = 0;
            for (int j = 0; j < accounts[i].size(); j++){
                customerWealth += accounts[i].at(j);
            }
            customerTotals.push_back(customerWealth);
        }
        // int customerAccounts = customerTotals.size();
        int highestWealth = 0;
        for (int n = 0; n < customerTotals.size(); n++){
            if (highestWealth < customerTotals[n]){
                highestWealth = customerTotals[n];
            };
        }
        return highestWealth; 
    }
};