class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = n + m - 1;
        m--,n--;
        while( m >= 0 && n >= 0){
            if(nums2[n] > nums1[m] ){
                nums1[p--] = nums2[n--];
            }
            else{
                nums1[p--] = nums1[m--];
            }
        }
        while (n >= 0){
            nums1[p--] = nums2[n--]; 
        }
        
    }
};