class Solution {
public:
    void solve(vector<int>& nums,set<vector<int>>& st,vector<int>& output,int idx){
        if(idx==nums.size()){
            st.insert(output);
            return;
        }
        solve(nums,st,output,idx+1);
        output.push_back(nums[idx]);
        solve(nums,st,output,idx+1);
        output.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> output;
        vector<vector<int>> ans;
        set<vector<int>> st;
        solve(nums,st,output,0);
        ans = vector<vector<int>>(st.begin(),st.end());
        return ans;
    }
};
