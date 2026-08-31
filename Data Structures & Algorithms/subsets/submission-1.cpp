class Solution {
public:
    void solve(vector<int>& nums,int idx,vector<int>& output, vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back(output);
            return;
        }
        solve(nums,idx+1,output,ans);
        output.push_back(nums[idx]);
        solve(nums,idx+1,output,ans);
        output.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        solve(nums,0,output,ans);
        return ans;
    }
};
