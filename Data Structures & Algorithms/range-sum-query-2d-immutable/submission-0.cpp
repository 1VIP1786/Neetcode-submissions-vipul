class NumMatrix {
public:
    vector<vector<int>>pre ;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size() ;
        pre.assign(m+1,vector<int>(n+1 ,0)) ;
        for(int i = 1 ; i <= m ; i++){
            for(int j = 1 ; j <= n ; j++){
                pre[i][j] = matrix[i-1][j-1] + pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1] ;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int r1 = row1 , r2 = row2 + 1 , c1 = col1 , c2 = col2 + 1 ;
        return pre[r2][c2] - pre[r2][c1] - pre[r1][c2] + pre[r1][c1]; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */