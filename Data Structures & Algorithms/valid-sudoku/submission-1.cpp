class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      unordered_set<string> sets;
      for(int i = 0;i<9;i++)  {
        for(int j=0;j<9;j++){
            if(board[i][j]=='.') continue;
            string row = string(1,board[i][j])+"_R_"+to_string(i);
            string col = string(1,board[i][j])+"_C_"+to_string(j);
            string box = string(1,board[i][j])+"_R_"+to_string(i/3)+to_string(j/3);
            if(sets.find(row) != sets.end()||sets.find(col)!= sets.end()||sets.find(box)!= sets.end()){
                return false;
            }
            sets.insert(row);
            sets.insert(col);
            sets.insert(box);
        }
      }
      return true;
    }
};
