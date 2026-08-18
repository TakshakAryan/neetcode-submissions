class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int left = 0;
        int right = 0;
        int ans = 0;
        while(right<s.size()){
            if(hash[s[left]]!=-1){
                if(left<=hash[s[right]]){
                    left = hash[s[right]]+1;
                }
            }
            ans = max(ans,right-left+1);
            hash[s[right]] = right;
            right++;
        }
        return ans;
    }
};
