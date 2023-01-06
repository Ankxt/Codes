class Solution {
    public int maxIceCream(int[] v, int sum) {
        int cnt=0;
        Arrays.sort(v);
        for(int i=0; i<v.length; i++){
            sum-=v[i];
            if(sum<0)
                break;
            cnt++;
        }
        return cnt;
    }
}