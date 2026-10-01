class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> temp(n,0);
        for(int i = n-1;i>=0;i--){
            int ele = i;
            while(!st.empty() && temperatures[st.top()]<=temperatures[ele]){
                st.pop();
            }
            if(!st.empty()){
                temp[i] = st.top() - i;
            }
            st.push(ele);
        }
        return temp;
    }
};
