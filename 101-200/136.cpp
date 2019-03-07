class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(auto& element:nums)
            res ^= element;
        return res;
    }
};