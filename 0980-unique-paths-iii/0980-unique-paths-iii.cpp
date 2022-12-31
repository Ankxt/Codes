int tot,n,m,dx[]={1,-1,0,0},dy[]={0,0,-1,1},vis[21][21];
vector<int> st,en;
class Solution {
public:
    int dfs(int x, int y, vector<vector<int> > &v, int cnt){
        vis[x][y]=1;
        // cout<<x<<' '<<y<<' '<<cnt<<endl;
        if(x==en[0] && y==en[1] && cnt==tot){
            vis[x][y]=0;
            return 1;
        }
        int ans=0;
        for(int i=0; i<4; i++){
            int x1=x+dx[i],y1=y+dy[i];
            if(x1<0 || y1<0 || x1>=n || y1>=m || vis[x1][y1]==1 || v[x1][y1]==-1)
                continue;
            ans+=dfs(x1,y1,v,cnt+1);
        }
        vis[x][y]=0;
        return ans;
    }
    int uniquePathsIII(vector<vector<int>>& v) {
        tot=2,n=v.size(),m=v[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]==1)
                    st={i,j};
                if(v[i][j]==2)
                    en={i,j};
                if(v[i][j]==0)
                    tot++;
            }
        }
        // cout<<tot<<endl;
        return dfs(st[0],st[1],v,1);
    }
};