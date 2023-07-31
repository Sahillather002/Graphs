// here adj is given as adjacency matrix :-)
class Solution {
  public:
    void bfs(int node,vector<int>& vis,vector<vector<int>> adj,int V){
        queue<int>q;
        q.push(node);
        vis[node]=1;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(int i=0;i<V;i++){
                if(!vis[i] && adj[x][i]==1){//if node is connected to i and not visited
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
    }
    
    void dfs(int node,vector<int>& vis,vector<vector<int>>& adj,int V){
        vis[node]=1;
        int n=adj[node].size();
        for(int i=0;i<n;i++){
            if(i!=node && adj[node][i]==1){//if node is connected to i
                if(!vis[i]){
                    dfs(i,vis,adj,V);
                }
            }
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int>vis(V,0);
        int ans=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bfs(i,vis,adj,V);
                ans++;
            }
        }
        return ans;
    }
};
