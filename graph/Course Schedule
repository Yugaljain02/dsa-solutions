class Solution {
public:
    bool iscourses(vector<int>adj[], vector<int>&indegree, int n){
           queue<int>q;
           int count =0;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                count++;
                 q.push(i);
        } 

    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto&it : adj[node]){
            indegree[it]--;
            if(indegree[it]==0) {
                count++;
                q.push(it);
        }
        }
    }
    if(count==n) return true;
      return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indegree(numCourses,0);
     vector<int>adj[numCourses];
        for(auto& v :prerequisites){
            int u = v[0];
            int s = v[1];
            adj[s].push_back(u);//s-->u
        }
        for(int i=0;i<numCourses;i++){
            for(auto&it:adj[i]){
                indegree[it]++;
            }
        }
       
         return iscourses(adj,indegree,numCourses);

        
        
    }
};
