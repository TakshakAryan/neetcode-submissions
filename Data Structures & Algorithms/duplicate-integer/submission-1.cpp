class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]>1){
                return true;
                break;
            }
        }
        return false;
    }
};