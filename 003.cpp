class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> q;
        int l = 0, r = 0 ,ans =0;
        while(r < s.size()){
            if(q.find(s[r]) == q.end()){
                q.insert(s[r++]);
                ans = max(ans,(int)q.size());
                
            }
            else{
                q.erase(s[l++]);
            }
        
        }
        
        return ans;
    }
};