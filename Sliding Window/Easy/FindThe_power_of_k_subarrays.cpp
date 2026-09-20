class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return {};
        
        std::vector<int> results(n - k + 1, -1);
        int consecutive_cnt = 0;
        
        for (int i = 0; i < n; ++i) {
            if (i > 0 && nums[i] == nums[i - 1] + 1) {
                consecutive_cnt++;
            } else {
                consecutive_cnt = 1;
            }
            
            if (i >= k - 1) {
                if (consecutive_cnt >= k) {
                    results[i - k + 1] = nums[i];
                }
            }
        }
        
        return results;
    }
};