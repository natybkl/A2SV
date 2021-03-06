class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if((r*c != m*n) || (r==m && c==n)){
            return mat;
        }
        
        vector<vector<int>> res;
        vector<int> col={};
        int tmp=0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
               if(tmp == c){
                  res.push_back(col);
                  col = {};
                  tmp = 0;
               } 
                  col.push_back(mat[i][j]);
                  tmp++;
            }
        }
        res.push_back(col);
        return res;
    }
    
};


// using 2d to 1d then to 2d matrix mapping
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if((r*c != m*n) || (r==m && c==n)){
            return mat;
        }
        
        vector<vector<int>> res(r, vector<int>(c,0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){       
                 int x = (i*n + j) / c;    
                 int y = (i*n + j) % c;
                 res[x][y] = mat[i][j];
            }
        }
            return res;
    }
    
};
