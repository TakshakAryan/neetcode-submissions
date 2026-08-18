class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        vector<int> ans;
        int carry = 1;
        while (n >= 0 || carry > 0) {
            int sum = carry;
            if (n >= 0) {
                sum += digits[n];
                n--;
            }
            ans.push_back(sum % 10);
            carry = sum / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
