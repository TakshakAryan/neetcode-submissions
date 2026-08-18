class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    int n = fruits.size();
    int ans = 0;
    for(int i=0;i<n;i++){
        unordered_set<int> s;
        for(int j=i;j<n;j++){
            s.insert(fruits[j]);
            if(s.size()<=2){
                ans = max(ans,j-i+1);
            }else{
                break;
            }
        }
    }
    return ans;
    }
};