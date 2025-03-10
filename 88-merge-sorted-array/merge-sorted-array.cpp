class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int idx = m+n-1;
        int j = n-1;
        while(j>=0 && i>=0){
            if(nums1[i]>nums2[j]){
                nums1[idx--] = nums1[i--];
            }
            else{
                nums1[idx--] = nums2[j--];
            }//hi
        }
        while(j>=0){// if spaces of i is still left
            nums1[idx--] = nums2[j--];
        }
        
    }
};