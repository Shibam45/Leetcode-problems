class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int srow = 0, erow = m-1, scol = 0, ecol = n-1;
        vector<int> ans;

        while(srow <= erow && scol <= ecol){

            for(int i=scol; i<=ecol; i++){
                ans.push_back(mat[srow][i]);
            }

            for(int j=srow+1; j<=erow; j++){
                ans.push_back(mat[j][ecol]);
            }

            for(int i=ecol-1; i>=scol; i--){
                if(srow==erow){
                    break;
                }
                ans.push_back(mat[erow][i]);
            }

            for(int j=erow-1; j>=srow+1; j--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(mat[j][scol]);
            }

            srow++; erow--; scol++; ecol--;
        }
        return ans;
    }
};