class Solution {
public:
    bool isPalindrome(string &check,int start, int end){
        if(start>=end) return true;
        if(check[start]!=check[end]) return false;
        return isPalindrome(check,start+1,end-1);
    }
    void solve(string s,vector<vector<string>>& ans,vector<string>& output,int idx){
        if(idx==s.size()){
            ans.push_back(output);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(isPalindrome(s,idx,i)){
                output.push_back(s.substr(idx,i-idx+1));
                solve(s,ans,output,i+1);
                output.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> output;
        solve(s,ans,output,0);
        return ans;
    }
};
