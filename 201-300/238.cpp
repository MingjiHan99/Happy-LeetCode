class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         
         sz = nums.size();
         rec = nums;
         gao(1,0);
         return vec;
    }
    
    int gao(int prev,int pos){
        int post  = 1;
        if(pos < sz){
            
            post = gao(prev * rec[pos],pos+1);
            vec.insert(vec.begin(),prev * post);
            post *= rec[pos];
        }
        return post;
        
    }
private:
    int sz;
    vector<int> rec;
    vector<int> vec;
};