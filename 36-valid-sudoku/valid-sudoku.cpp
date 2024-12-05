class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>>row(9);
        vector<set<char>>col(9);
        vector<set<char>>box(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')
                continue;
                char val=board[i][j];
                int boxindex=(i/3)*3+j/3;
                if(row[i].count(val)||col[j].count(val)||box[boxindex].count(val))
                return false;
                row[i].insert(val);
                col[j].insert(val);
                box[boxindex].insert(val);
            }
        }
        return true;
    }
};