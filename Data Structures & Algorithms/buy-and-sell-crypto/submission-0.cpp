class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = INT_MIN;
        for(int i = 0;i<n;i++){
            for(int j=i;j<n;j++){
                int profit = prices[j]-prices[i];
                ans = max(ans,profit);
            }
        }
        return ans;
    }
};
