class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
           
           vector<int> mer;
            int sz1 = nums1.size(), sz2 = nums2.size();
            int i = 0, j =0 ;
            while(i < sz1 && j < sz2){
                if(nums1[i] < nums2[j]){
                    mer.push_back(nums1[i++]);
                }
                else{
                    mer.push_back(nums2[j++]);
                }
                
            }
        
            while(i < sz1){
                mer.push_back(nums1[i++]);
            }
            while(j < sz2){
                mer.push_back(nums2[j++]);
            }
        
            int sz = mer.size();
      
            if(sz % 2 == 1){
                return mer[sz / 2 ];
            }
            else{
                return ( mer[sz / 2 - 1] + mer[sz / 2 ] ) / 2.0; 
            }
    }
};