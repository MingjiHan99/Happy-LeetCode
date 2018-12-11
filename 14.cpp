class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string cnt = "";
        if(!strs.size()){
            return cnt;
        }
        for(int i = 0 ; i < strs[0].size(); i++){
            
            for(int j = 1; j < strs.size(); j++){
                if(strs[j].size() < i + 1 || strs[j][i] != strs[0][i]){
                   return cnt; 
                }
            }
            cnt += strs[0][i];
        }
        
        return cnt;
    }
};