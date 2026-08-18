class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l_sum = 0;
        int m_sum = 0;
        for(int i=0;i<k;i++){
            l_sum+=cardPoints[i];
        }
        m_sum = l_sum;
        int r_sum = 0;
        int r_idx = n-1;
        for(int i=k-1;i>=0;i--){
            l_sum-=cardPoints[i];
            r_sum+=cardPoints[r_idx];
            m_sum = max(m_sum,r_sum+l_sum);
            r_idx = r_idx-1;
        }
        return m_sum;
    }
};