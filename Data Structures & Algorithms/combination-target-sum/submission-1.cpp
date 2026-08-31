class Solution {
   public:
    void solve(int idx, vector<int>& nums, int target, vector<int>& output,
               vector<vector<int>>& ans) {
                if(target==0){
                    ans.push_back(output);
                    return;
                }
                if(idx==nums.size() || target<0) return;
                solve(idx+1,nums,target,output,ans);
                output.push_back(nums[idx]);
                solve(idx,nums,target-nums[idx],output,ans);
                output.pop_back();
               }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> output;
        vector<vector<int>> ans;
        solve(0, nums, target, output, ans);
        return ans;
    }
};
