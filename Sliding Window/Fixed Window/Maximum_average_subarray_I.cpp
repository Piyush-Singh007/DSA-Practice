// T.C=O(N)
// S.C=O(1)

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int windowSum=0;

        for(int i=0; i<k; ++i){
            windowSum +=nums[i];
        }

        int maxSum=windowSum;

        for(int i=k; i<n; ++i){
            windowSum=windowSum-nums[i-k]+nums[i];
            if(windowSum>maxSum){
                maxSum=windowSum;
            }
        }

        return static_cast<double>(maxSum)/k;
    }
};