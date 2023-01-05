class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& v) {
        int cnt=0;
        sort(v.begin(),v.end());
        int en=v[0][1];
        for(int i=0; i<v.size(); i++){
            if(v[i][0]<=en)
                en=min(en,v[i][1]);
            else cnt++,en=v[i][1],i--;
        }
        return cnt+1;
    }
};