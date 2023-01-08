class Solution {
    public int maxPoints(int[][] v) {
        int n=v.length,cnt=1;
        for(int i=0; i<n; i++){
            int her=1;
            for(int j=i+1; j<n; j++){
                her=2;
                cnt=Math.max(her,cnt);
                for(int k=j+1; k<n; k++){
                    if((v[i][1]-v[j][1])*(v[j][0]-v[k][0])==(v[j][1]-v[k][1])*(v[i][0]-v[j][0])) 
                her++;
                    cnt=Math.max(cnt,her);
                }
            }
        }
        return cnt;
    }
}