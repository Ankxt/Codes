class Solution {
public:
    int findJudge(int n, vector<vector<int>>& v) {
        vector<set<int> > s(n+1);
        set<int> t;
        for(int i=0; i<v.size(); i++){
            s[v[i][1]].insert(v[i][0]);
            t.insert(v[i][0]);
        }
        int cnt=0,inx=-1;
        for(int i=1; i<=n; i++){
            if(s[i].size()==n-1 && t.count(i)==0)
                cnt++,inx=i;
        }
        return cnt==1 ? inx : -1;
    }
};