vector<vector<int> > ans;
int n,vis[18];
class Solution {
public:
    void dfs(vector<int> ar[], int cnode, vector<int> v){
        vis[cnode]=1;
        v.push_back(cnode);
        for(auto child:ar[cnode]){
            if(vis[child]==0)
                dfs(ar,child,v);
        }
        vis[cnode]=0;
        if(cnode==n-1){
            ans.push_back(v);
        }
        v.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& v) {
        ans.clear();
        n=v.size();
        vector<int> ar[n];
        for(int i=0; i<n; i++){
            for(auto j:v[i])
                ar[i].push_back(j);
        }
        dfs(ar,0,vector<int>());
        return ans;
    }
};