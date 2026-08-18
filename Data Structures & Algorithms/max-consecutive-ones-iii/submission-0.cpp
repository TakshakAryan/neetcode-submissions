class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int max_l = 0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i;j<n;j++){
                if(nums[j]==0){
                    count++;
                }
                if(count<=k){
                    max_l = max(max_l,j-i+1);
                }else{
                    break;
                }
            }            
        }
        return max_l;
        
    }
};