class Solution {
    public int maxProfit(int[] v) {
        int n=v.length,suf[]=new int[n];
        suf[n-1]=v[n-1];
        for(int i=n-2; i>=0; i--)
            suf[i]=Math.max(suf[i+1],v[i]);
        int ans=0;
        for(int i=0; i<n; i++)
            ans=Math.max(ans,suf[i]-v[i]);
        return ans;
    }
}