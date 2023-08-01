//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    void dfs(vector<int>adj[],int s,int d,vector<int>& vis,int& ans){
        if(s==d){
            ans++;
            return;
        }
        vis[s]=1;
        for(auto i:adj[s]){
            if(!vis[i]){
                dfs(adj,i,d,vis,ans);
            }
        }
        vis[s]=0;
    }
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        vector<int>vis(V,0);
        int ans=0;
        dfs(adj,source,destination,vis,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}
// } Driver Code Ends
