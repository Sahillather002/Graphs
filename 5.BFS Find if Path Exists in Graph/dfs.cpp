class Solution {
public:
    bool bfs(vector<int>&vis,vector<vector<int>>& adj,int s,int d){
        queue<int>q;
        q.push(s);
        vis[s]=1;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(x==d)return true;
            for(int i=0;i<adj[x].size();i++){
                int t=adj[x][i];
                if(vis[t]==0){
                    q.push(t);
                    vis[t]=1;
                }
            }
        }
        return false;
    }

    bool dfs(vector<int>& vis,vector<vector<int>>& adj,int s,int d){
        if(s==d)return true;
        if(vis[s])return false;
        vis[s]=1;
        for(int i=0;i<adj[s].size();i++){
            if(dfs(vis,adj,adj[s][i],d))return true;
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        // return bfs(vis,adj,source,destination);
        return dfs(vis,adj,source,destination);
    }
};
