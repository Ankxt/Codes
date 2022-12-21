int col[2001];
class Solution {
public:
    bool dfs(int cnode, int c, vector<int> ar[]){
        col[cnode]=c;
        bool ch=true;
        for(auto child:ar[cnode]){
            if(col[child]==-1)
                ch=ch&&dfs(child,c^1,ar);
            else if(col[child]!=c^1)
                return false;
        }
        return ch;
    }
    bool possibleBipartition(int n, vector<vector<int>>& v) {
        vector<int> ar[n+1];
        memset(col,-1,sizeof col);
        for(int i=0; i<v.size(); i++)
            ar[v[i][0]].push_back(v[i][1]),ar[v[i][1]].push_back(v[i][0]);
        bool ch=true;
        for(int i=1; i<=n; i++){
            if(col[i]==-1)
                ch=ch&&dfs(i,0,ar);
        }
        return ch;
    }
};