class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> next(n,-1);
        vector<int> prev(n,-1);
        for(int i=n-1;i>=0;i--){
            int ele = i;
            while(!st.empty() && heights[st.top()]>=heights[ele]){
                st.pop();
            }
            if(!st.empty()){
                next[i] = st.top();
            }
            st.push(ele);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=0;i<n;i++){
            int ele = i;
            while(!st.empty() && heights[st.top()]>=heights[ele]){
                st.pop();
            }
            if(!st.empty()){
                prev[i] = st.top();
            }
            st.push(ele);
        }
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            int l = heights[i];
            if(next[i]==-1) next[i] = n;
            int b = next[i]-prev[i]-1;
            int area = l*b;
            ans = max(ans,area);
        }
        return ans;
    }
};
