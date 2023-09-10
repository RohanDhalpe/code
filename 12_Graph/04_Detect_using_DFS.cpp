/*
private:
    bool Detect_dfs(int node,int parent,int vis[],vector<int> adj[]){
        vis[node]=1;
        for(auto adjnode:adj[node])
        {
            if(!vis[adjnode]){
              if(Detect_dfs(adjnode,node,vis,adj)==true) return true;  
            }
            else if(adjnode!=parent) return true;
        }
      return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]){
        int vis[V]={0};
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(Detect_dfs(i,-1,vis,adj)==true) return true;
            }
        }
     return false;
    }
*/