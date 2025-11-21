class Solution {
public:
    void DFS(int i,int j,vector<vector<bool>> &vis,vector<vector<char>> &grid,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || grid[i][j] != '1'){
            return;
        }

        vis[i][j] = true;

        DFS(i-1 , j , vis , grid , n , m); // top
        DFS(i , j+1 , vis , grid , n , m); // right
        DFS(i+1 , j , vis , grid , n , m); // bottom
        DFS(i , j-1 , vis , grid , n , m); // left
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n,vector<bool>(m,false));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    DFS(i,j,vis,grid,n,m);
                    islands++;
                }
            }
        }
        return islands;
    }
};