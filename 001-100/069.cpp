class Solution {
public:
    int mySqrt(int x) {
      
        
        long long left = 1;
        long long right = x;
        long long mid = 0;
        long ans = 0;
        while(left <= right){
            
            mid = (left + right) / 2;
          
            long long temp = 1LL * mid * mid;
            if( temp > x){
                right = mid - 1;
            }
            else{
                ans = mid;
                left = mid + 1;
               
            }
            
        }
        
        return right;
    }
};