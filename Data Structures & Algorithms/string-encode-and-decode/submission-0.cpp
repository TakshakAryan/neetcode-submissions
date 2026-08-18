class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string ans =  "";
        for(int i=0;i<n;i++){
            int n1 = strs[i].length();
            ans += to_string(n1)+'#'+strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i<s.size()){
            int j = i;
            while(s[j]!='#') j++;
            int length = stoi(s.substr(i,j-i));
            res.push_back(s.substr(j+1,length));
            i = j + length+1;
        }
        return res;
    }
};
