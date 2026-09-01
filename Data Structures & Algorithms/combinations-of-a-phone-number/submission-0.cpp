class Solution {
public:
    void solve(string digits,vector<string>& hash,vector<string>& ans,string output,int idx){
        if(idx==digits.size()){
            ans.push_back(output);
            return;
        }
        int num = digits[idx]-'0';
        string s = hash[num];
        for(int i = 0;i<s.size();i++){
            output.push_back(s[i]);
            solve(digits,hash,ans,output,idx+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> hash = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string output = "";
        if(digits.size()==0) return ans;
        solve(digits,hash,ans,output,0);
        return ans;
    }
};