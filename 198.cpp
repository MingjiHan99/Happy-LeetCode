class Solution {
public:
    int rob(vector<int>& nums) {
        int ans = 0;
        int sz = nums.size();
        int f[101010];
        if(sz == 0){
            return 0;
        }
        else if(sz == 1){
            return nums[0];
        }
        else if(sz == 2){
            return max(nums[0],nums[1]);
        }
        else{
            f[0] = nums[0];
            f[1] = max(nums[1],nums[0]);
            
            for(int i = 2; i < sz; i++){
                f[i] = max(nums[i] + f[i - 2], f[i - 1]);
            }
            
        }
        
        return f[sz - 1];
    }
};