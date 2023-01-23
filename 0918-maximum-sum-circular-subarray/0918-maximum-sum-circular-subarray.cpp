int dp[50001][2],INF=1e9+7;
class Solution {
public:
    int solve(vector<int> &v, int i, int p){
        if(i>=v.size())
            return (p==0 ? -INF : 0);
        int &a=dp[i][p];
        if(a!=-1)
            return a;
        if(p){
            return a=max(v[i]+solve(v,i+1,p),0);
        }
        return a=max(v[i]+solve(v,i+1,1),solve(v,i+1,0));
        
    }
    int maxSubarraySumCircular(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        int ans=solve(v,0,0),sum=0;
        vector<int> pre(v.size()+1,-INF);
        for(int i=1; i<=v.size(); i++)
            sum+=v[i-1],pre[i]=max(pre[i-1],sum);
        sum=0;
        for(int i=v.size()-1; i>=0; i--){
            sum+=v[i];
            ans=max(ans,pre[i]+sum);
        }
        return ans;
    }
};