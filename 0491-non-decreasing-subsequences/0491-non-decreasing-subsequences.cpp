#define getunique(v)                {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& v) {
        int n=v.size(),mask=(1<<n);
        vector<vector<int> > ans;
        for(int i=0; i<mask; i++){
            vector<int> a;
            for(int j=0; j<n; j++){
                if((1<<j)&i)
                    a.push_back(v[j]);
            }
            if(a.size()<=1)
                continue;
            vector<int> t=a;
            sort(t.begin(),t.end());
            if(t==a)
                ans.push_back(a);
        }
        getunique(ans);
        return ans;
    }
};