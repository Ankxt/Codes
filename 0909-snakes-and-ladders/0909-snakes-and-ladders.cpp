int n,pr[30][30],INF=1e9+7,dp[401];
map<int,vector<int> >  m;
class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& v) {
        n=v.size();
        m.clear();
        memset(dp,-1,sizeof dp);
        int cnt=1;
        for(int i=n-1,p=0; i>=0; i--,p^=1){
            if(p){
                for(int j=n-1; j>=0; j--){
                    m[cnt++]={i,j};
                }
            }
            else{
                for(int j=0; j<n; j++)
                    m[cnt++]={i,j};
            }
        }
        queue<int> q;
        q.push(1);
        dp[1]=0;
        while(!q.empty()){
            int f=q.front();
            q.pop();
            for(int i=f+1; i<=min(n*n,f+6); i++){
                vector<int> a=m[i];
                int her=v[a[0]][a[1]];
                if(her==-1)
                    her=i;
                if(dp[her]==-1)
                    dp[her]=dp[f]+1,q.push(her);
                
            }
        }
        return dp[n*n];
    }
};