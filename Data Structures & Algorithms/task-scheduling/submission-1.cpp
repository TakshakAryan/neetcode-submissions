class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> hash(26,0);
        for(int i = 0;i<tasks.size();i++){
            hash[tasks[i]-'A']++;
        }
        int time = 0;
        priority_queue<int> q;
        for(int i=0;i<26;i++){
            if(hash[i]>0) q.push(hash[i]);
        }
        while(!q.empty()){
            vector<int> temp;
            for(int i=1;i<=n+1;i++){
                if(!q.empty()){
                    int freq = q.top();
                    q.pop();
                    freq--;
                    temp.push_back(freq);
                }                
            }
            for(int &f : temp){
                    if(f>0){
                        q.push(f);
                    }
                }
            if(q.empty()) time+=temp.size();
            else time+=n+1;
        }
        return time;
    }
};
