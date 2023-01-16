class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& a) {
        vector<vector<int> > ans;
        int st=a[0],en=a[1];
        for(int i=0; i<v.size(); i++){
            if(a[1]<v[i][0] || a[0]>v[i][1])
            {
                ans.push_back(v[i]);
                continue;
            }
            else{
                st=min(st,v[i][0]);
                en=max(en,v[i][1]);
            }
        }
                ans.push_back({st,en});
        sort(ans.begin(),ans.end());
        return ans;
    }
};