class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int target = 0;
        int f = 0;
        int ans = INT_MIN;
        for(int i = 0 ; i < nums.size(); i++){
             f = max(f + nums[i], nums[i]);
             ans = max(f,ans);
            
        }
           
        return ans;
    }
};