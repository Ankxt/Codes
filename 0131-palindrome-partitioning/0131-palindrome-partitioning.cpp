vector<vector<string> > ans;
class Solution {
public:
    bool ispali(string &t){
        string s=t;
        reverse(s.begin(),s.end());
            return s==t;
    }
    void solve(string &s, int i, int p,vector<string> v){
        if(i>=s.size()){
            if(v.size())
            ans.push_back(v);
            return;
        }
        if(i!=s.size()-1)
        solve(s,i+1,p,v);
        string t=s.substr(p,i+1-p);
        if(ispali(t))
            v.push_back(t),solve(s,i+1,i+1,v),v.pop_back();
    }
    vector<vector<string>> partition(string s) {
        ans.clear();
        solve(s,0,0,vector<string>{});
        return ans;
    }
};