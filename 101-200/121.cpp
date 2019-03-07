class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0 || prices.size() == 1){
            return 0;
        }   
        
        int min_val[101010];
        int temp = prices[0];
        min_val[0] = prices[0];
        
        for(int i = 1; i < prices.size() - 1; i++){
            if(prices[i] < temp){
                temp = prices[i];
                min_val[i] = prices[i];
            }
            else{
                min_val[i] = temp;
            }
        }
        
        int ans = 0;
        for(int i = 1; i < prices.size() ; i++){
            ans = max(ans, prices[i] - min_val[i - 1]);
        }
        return ans;
        
    }
};