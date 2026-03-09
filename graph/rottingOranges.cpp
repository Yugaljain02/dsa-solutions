class Solution {
public:   
    
     vector<vector<int>>directions{{1,0},{0,1},{-1,0},{0,-1}};
  
    int minutes(int n , int m,vector<vector<int>>& grid,queue<pair<pair<int,int>,int>>&q){
        int time =0;
         while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int currtime = q.front().second;
            time= max(time,currtime);
            q.pop();
           
         
           for(auto&dir : directions){
            int new_i = i+dir[0];
            int new_j = j+dir[1];
            if(new_i<n && new_i>=0 && new_j<m && new_j>=0  && grid[new_i][new_j]==1 ){
                     grid[new_i][new_j]=2;
                    q.push({{new_i,new_j},time+1});
                   
                }
              
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( grid[i][j]==1){
                    return -1;
                }
            }
        }

       return time;
    }
    int orangesRotting(vector<vector<int>>& grid) {
           int n= grid.size();
           int m = grid[0].size();
            queue< pair<pair<int,int>,int>>q;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j]==2){
                        q.push({{i,j},0});
                    }
                }
            }
         return  minutes(n,m,grid,q);
        

    }
};
