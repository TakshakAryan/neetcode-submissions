class Solution {
   public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>,
                       greater<pair<int, vector<int>>>>
            q;

        for (auto p : points) {
            int distance = p[0] * p[0] + p[1] * p[1];

            q.push({distance, p});
        }

        vector<vector<int>> res;

        while (k--) {
            res.push_back(q.top().second);
            q.pop();
        }

        return res;
    }
};