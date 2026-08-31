class Solution {
public:
    void solve(int idx,vector<int>& candidates, int target,vector<int>& output,vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(output);
            return;
        }
        if(idx==candidates.size()||target<0) return;
        int i = idx + 1;
        while(i<candidates.size() && candidates[idx]==candidates[i]) i++;
        solve(i,candidates,target,output,ans);
        if(candidates[idx]<=target){
        output.push_back(candidates[idx]);
        solve(idx+1,candidates,target-candidates[idx],output,ans);
        output.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> output;
        vector<vector<int>>ans;
        solve(0,candidates,target,output,ans);
        return ans;
    }
};
