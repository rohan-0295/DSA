class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans{};
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;
        int j = 0;

        // Merging two sorted arrays
        while (i < m && j < n) {
            if (nums1[i] > nums2[j]) {
                ans.push_back(nums2[j]);
                j++;
            } else {
                ans.push_back(nums1[i]);
                i++;
            }
        }

        // Adding remaining elements from nums2
        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        // Adding remaining elements from nums1
        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        double median;
        int size = ans.size();

        // Calculating median
        if (size % 2 == 1) {  // Odd size
            median = ans[size / 2];
        } else {  // Even size
            median = (ans[size / 2] + ans[(size / 2) - 1]) / 2.0;
        }

        return median;
    }
};
