int vis[200009];
class Solution {
public:
    void dfs(vector<int> ar[], int cnode){
        vis[cnode]=1;
        for(auto child:ar[cnode])
            if(vis[child]==0)
                dfs(ar,child);
    }
    bool validPath(int n, vector<vector<int>>& e, int source, int destination) {
        vector<int> ar[n+1];
        for(int i=0; i<=n; i++)
            vis[i]=0;
        for(int i=0; i<e.size(); i++)
            ar[e[i][0]].push_back(e[i][1]),ar[e[i][1]].push_back(e[i][0]);
        
        dfs(ar,source);
        return vis[destination]==1;
    }
};