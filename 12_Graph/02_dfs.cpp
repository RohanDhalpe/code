/*
class Solution {
    private:
      void dfs(int node,vector<int> adj[],vector<int>&ls,int vis[])
       {
          vis[node]=1;
          s.push_back(node);
          //all its neighboures
          for(auto it:adj[node])
          { 
              if(!vis[it])
              {
                 dfs(it,adj,ls,vis); 
              }
          }
       }
    
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        int i=0;
        vector<int>s;
        dfs(i,adj,s,vis);
        return s;
    }
};

*/