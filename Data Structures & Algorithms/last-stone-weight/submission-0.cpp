class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.rbegin(),stones.rend());
            if(stones[0]==stones[1]){
                stones.erase(stones.begin());
                stones.erase(stones.begin());
            }
            else{
                stones[0] = stones[0] - stones[1];
                stones.erase(stones.begin()+1);
            }
        }
        return stones.empty()?0:stones[0];
    }
};
