class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int left_max = INT_MIN;
        int right_max = INT_MIN;
        int water = 0;
        while(left<right){
            if(height[right]<height[left]){
                if(height[right]>right_max){
                    right_max = height[right];
                }
                else{
                    water+=right_max-height[right];
                }
                right--;
            }else{
                if(height[left]>left_max){
                    left_max = height[left];
                }
                else{
                    water+=left_max-height[left];
                }
                left++;
            }
        }
        return water;
    }
};
