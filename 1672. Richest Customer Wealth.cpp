class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int current_sum , maxsum = 0;

        for (int i = 0; i<accounts.size(); i++){
            current_sum = 0;
            for (int j = 0; j<accounts[0].size(); j++){
                current_sum += accounts[i][j];
            }
            maxsum = max (maxsum , current_sum);
        }
    
        return maxsum;
        }
};