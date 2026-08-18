class Solution {
public:
    bool validbox(int row,int col,int erow,int ecol,vector<vector<char>>& board){
        unordered_set<char> st;
        for(int i=row;i<=erow;i++){
            for(int j = col;j<=ecol;j++){
                if(board[i][j]=='.') continue;
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        //row validation
       for(int row = 0;row<9;row++) {
        unordered_set<char> st;
        for(int col = 0;col<9;col++){
            if(board[row][col]=='.') continue;
            if(st.find(board[row][col])!=st.end()){
                return false;
            }
            st.insert(board[row][col]);
        }
       }
       //col validation
       for(int col = 0;col<9;col++){
        unordered_set<char> st;
        for(int row = 0;row<9;row++){
          if(board[row][col]=='.') continue;
            if(st.find(board[row][col])!=st.end()){
                return false;
            }
            st.insert(board[row][col]);  
        }
       }
       // box validation
       for(int row = 0;row<9;row+=3){
        int erow = row+2;
        for(int col = 0;col<9;col+=3){
            int ecol = col+2;{
                if(!validbox(row,col,erow,ecol,board)){
                    return false;
                }
            }
        }
       }
       return true;

    }
};
