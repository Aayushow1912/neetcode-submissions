class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m,n;
        m = matrix.size();
        n = matrix[0].size();
        int flag = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == target){
                   flag = 1;
                }
            }
        }
        if(flag == 1)return true;
        else return false;
    }
};
