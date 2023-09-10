// //{ Driver Code Starts

// // } Driver Code Ends
// class Solution {
//   private:
//     bool Detect(int ele,vector<int> adj[],int vis[])
//     {
//         vis[ele]=1;
//         queue<pair<int,int>>q;
//         q.push({ele,-1});
        
//         while(!q.empty())
//         {
//             int node=q.front().first;
//             int parent=q.front().second;
//             q.pop();
            
//             for(auto adjNode : adj[node])
//             {
//                 if(!vis[adjNode]){
//                     vis[adjNode]=1;
//                     q.push({adjNode,node});
//                 }else if(parent!=adjNode){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
//   public:
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
//         int vis[V]={0};
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(Detect(i,adj,vis)) return true;
//             }
//         }
//       return false;
//     }
// };

