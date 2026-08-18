class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int ans = INT_MIN;
        while(left<right){
            int area = min(heights[right],heights[left])*(right-left);
            ans = max(ans,area);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};
