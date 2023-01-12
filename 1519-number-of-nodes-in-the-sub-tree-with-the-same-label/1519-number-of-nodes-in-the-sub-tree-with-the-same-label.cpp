vector<int> ans;
int vis[100001];
class Solution {
public:
    vector<int> dfs(vector<int> ar[], string &s, int cnode){
        vector<int> a(26);
        vis[cnode]=1;
        a[s[cnode]-'a']++;
        // cout<<cnode<<endl;
        for(auto child:ar[cnode]){
            if(vis[child]==0){
                vector<int> her=dfs(ar,s,child);
                for(int i=0; i<26; i++)
                    a[i]+=her[i];
            }
        }
        ans[cnode]+=a[s[cnode]-'a'];
        return a;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& v, string s) {
        vector<int> ar[n];
        memset(vis,0,sizeof vis);
        ans.resize(n);
        fill(ans.begin(),ans.end(),0);
        for(auto i:v)
            ar[i[0]].push_back(i[1]),ar[i[1]].push_back(i[0]);
        dfs(ar,s,0);
        return ans;
    }
};