class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> see;
        for(int i =0 ; i < 9; i++){
            for(int j =0; j < 9; j++){
                char num = board[i][j];
                if(num != '.'){
                    string row = string(1,num) + " in row " + to_string(i);
                    string col = string(1,num) + " in col " + to_string(j);
                    string box = string(1,num) + " in box " + to_string(i/3) + "-" + to_string(j/3);
                    if(see.count(row)|| see.count(col) || see.count(box)){
                        return false;
                    }
                    see.insert(row);
                    see.insert(col);
                    see.insert(box);
                }
            }
        }
        return true;
    }
};
