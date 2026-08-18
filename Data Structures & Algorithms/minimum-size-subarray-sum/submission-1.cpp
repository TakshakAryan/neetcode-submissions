class Solution {
   public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int ans = INT_MAX;
        int csum = 0;
        while (right < n) {
            csum += nums[right];
            while (csum >= target) {
                ans = min(ans, right - left + 1);
                csum -= nums[left];
                left++;
            }
            right++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};