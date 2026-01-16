class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expectedSum = 0;
        int actualSum = 0;
        int n = nums.size();
        expectedSum = (n*(n+1))/2;
        for(int i =0;i<n;i++){
            actualSum+=nums[i];
        }
        return expectedSum - actualSum;
    }
};