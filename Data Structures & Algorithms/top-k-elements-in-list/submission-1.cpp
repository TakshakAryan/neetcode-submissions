class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        while(k--){
        int maxf = 0;
        int element =0;
        for(auto i : mp){
            if(i.second>maxf){
                maxf = i.second;
                element = i.first;
            }
        }
        res.push_back(element);
        mp.erase(element);
        }
        return res;
    }
};
