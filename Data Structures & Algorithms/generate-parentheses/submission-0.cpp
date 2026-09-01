class Solution {
public:
    void solve(int n,vector<string>& ans,string s,int o_count,int c_count){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        if(o_count < n) solve(n,ans,s+"(",o_count+1,c_count);
        if(c_count < o_count) solve(n,ans,s+")",o_count,c_count+1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        solve(n,ans,s,0,0);
        return ans;
    }
};
