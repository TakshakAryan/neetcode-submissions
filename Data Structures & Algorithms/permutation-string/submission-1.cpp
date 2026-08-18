class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        int n = s1.size();
        int m = s2.size();
        for(int i=0;i<n;i++){
            hash1[s1[i]-'a']++;
        }
        int left = 0;
        int right = 0;
        int ans = 0;
        while(right<m){
            hash2[s2[right]-'a']++;
            if(right-left+1 == n){
                if(hash1==hash2){
                    return true;
                }
                hash2[s2[left]-'a']--;
                left++;
            }
            right++;
        }
        return false;
    }
};
