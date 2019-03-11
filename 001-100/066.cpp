class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int pos = digits.size() - 1;
        int res = 1,rem = 0;
        
        while(pos >= 0){
            int temp = digits[pos];
            digits[pos] = (digits[pos] + res) % 10;
            res = (temp + res) / 10;
            if(res == 0){
                break;
            }
            pos--;
        }
        
        if(pos == -1 && res == 1){
            digits.insert(digits.begin(),1);
        }
        return digits;
     }
};