int her[100001],vis[100001],ans;
class Solution {
public:
    int dfs(vector<int> ar[], int cnode, vector<bool> &a){
        vis[cnode]=1;
        int him=0;
        for(auto child:ar[cnode]){
            if(vis[child]==0)
                him|=dfs(ar,child,a);
        }
        if(a[cnode] && him==0){
            her[cnode]=1;
            return her[cnode];
        }
        return her[cnode]=him;
    }
    void dfs1(vector<int> ar[], int cnode){
        vis[cnode]=1;
        if(her[cnode]==0)
            return;
        cout<<cnode<<endl;
        ans++;
        for(auto child:ar[cnode]){
            if(vis[child]==0)
                dfs1(ar,child);}
        ans++;
    }
    int minTime(int n, vector<vector<int>>& v, vector<bool>& a) {
        vector<int> ar[n];
        memset(her,0,sizeof her);
        memset(vis,0,sizeof vis);
        for(auto i:v)
            ar[i[0]].push_back(i[1]),ar[i[1]].push_back(i[0]);
        dfs(ar,0,a);
        memset(vis,0,sizeof vis);
        for(int i=0; i<n; i++)
            cout<<her[i]<<' ';
        ans=0;
        dfs1(ar,0);
        return max(ans-2,0);
    }
};