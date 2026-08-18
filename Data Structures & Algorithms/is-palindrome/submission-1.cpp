class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                ans+=tolower(s[i]);
            }
        }
        int f = 0;
        int l = ans.size()-1;
        while(f<l){
            if(ans[f]!=ans[l]) return false;
            f++;
            l--;
        }
        return true;
        
    }
};
