// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left = 1,right = n,mid;
        while(left <= right){
            mid = (left + right) >> 1;
            if(!isBadVersion(mid)){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        
        
        }
        
        return left;
    }
};