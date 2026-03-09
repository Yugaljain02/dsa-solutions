class Solution {
public:
   vector<vector<int>>directions{{-1,0},{0,-1},{0,1},{1,0}};
     
     void bfs(int row , int col ,vector<vector<int>>&vis, vector<vector<char>>& grid){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
           for(auto & dir:directions){
                    int nrow = row+dir[0];
                    int ncol = col+dir[1];

            if(nrow>=0 && nrow<vis.size()&& ncol>=0 && ncol<vis[0].size() && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){        
                 vis[nrow][ncol]=1;
                q.push({nrow,ncol});

            

        }
     }
        }
     }
        
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count =0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                    count++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return count;
        
    }
};
