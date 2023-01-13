int ans=0,vis[100001];
class Solution {
public:
    int dfs(vector<int> ar[], int cnode, int p, string &s){
        vector<int> her;
        vis[cnode]=1;
        for(auto child:ar[cnode]){
            if(vis[child]==0){
                her.push_back(dfs(ar,child,cnode,s));
            }
        }
        sort(her.begin(),her.end(),greater<int>());
        if(her.size()==1)
            ans=max(ans,her[0]);
        else if(her.size()>=2)
            ans=max(ans,her[0]+her[1]);
        if(cnode==0)
            return 0;
        if(her.size()==0){
            return s[cnode]!=s[p];
        }
        return s[cnode]!=s[p] ? 1+her[0] : 0;
    }
    int longestPath(vector<int>& p, string s) {
        vector<int> ar[p.size()];
        memset(vis,0,sizeof vis);
        ans=0;
        for(int i=0; i<p.size(); i++){
            if(i==0)
                continue;
            ar[i].push_back(p[i]);
            ar[p[i]].push_back(i);
        }
        dfs(ar,0,0,s);
        return ans+1;
    }
};