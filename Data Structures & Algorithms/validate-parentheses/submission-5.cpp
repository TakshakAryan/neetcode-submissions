class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        int i = 0;

        while (i < n) {
            // Opening bracket
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
                i++;
            }
            // Closing bracket but stack is empty
            else if (st.empty()) {
                return false;
            }
            // Matching pair
            else if ((s[i] == ')' && st.top() == '(') ||
                     (s[i] == '}' && st.top() == '{') ||
                     (s[i] == ']' && st.top() == '[')) {

                st.pop();
                i++;
            }
            // Mismatched bracket
            else {
                return false;
            }
        }
        return st.empty();
    }
};