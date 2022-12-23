int dp[5001][2];
class Solution {
public:
    int solve(vector<int> &v, int i, int p){
        if(i>=v.size())
            return 0;
        int &a=dp[i][p];
        if(a!=-1)
            return a;
        if(p==0){
            return a=max(-v[i]+solve(v,i+1,1),solve(v,i+1,0));
        }
        return a=max(v[i]+solve(v,i+2,0),solve(v,i+1,1));
    }
    int maxProfit(vector<int>& v) {
        memset(dp,-1,sizeof dp);
        return solve(v,0,0);
    }
};