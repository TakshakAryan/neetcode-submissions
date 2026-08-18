class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char,int> mp;
        for(int i=0;i<m;i++)        {
            mp[t[i]]++;
        }
        int i=0, j=0;
        int start = 0;
        int reqCount = m;
        int minwindowSize = INT_MAX;
        while(j<n){
            char ch = s[j];
            if(mp[ch]>0){
                reqCount--;
            }
            mp[ch]--;
            while(reqCount==0){
                // we can shrink the window
                int currWindow = j-i+1;
                if(minwindowSize > currWindow){
                    minwindowSize = currWindow;
                    start = i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    reqCount++;
                }
                i++;
            }
            j++;
        }
        return minwindowSize==INT_MAX?"":s.substr(start,minwindowSize);
    }
};
