vector<string> ans;
class Solution {
public:
    void solve(string &s, int i, vector<int> a){
        if(a.size()==3){
            int crr=0,j=0;
            string her,t;
            reverse(a.begin(),a.end());
            for(; j<s.size(); j++){
                if(count(a.begin(),a.end(),j)){
                t+=s[j];
                ShriRam:;
                if(t[0]=='0' && t.size()>1)
                    return;
                if(t.size()>3)
                    return;
                if(stoi(t)>255)
                    return;
                her+=t;
                her+='.';
                t.clear();
                a.pop_back();
                }
                else t+=s[j];
            }
            if(t.size())
                goto ShriRam;
            // for(int j=0; j<3; j++)
            //     cout<<a[j]<<' ';
            her.pop_back();
            // cout<<endl<<her<<endl;
            
            ans.push_back(her);
            return;
        }
        if(i>=s.size() || a.size()>3)
            return;
        if(i!=s.size()-1)
        a.push_back(i),solve(s,i+1,a),a.pop_back();
        solve(s,i+1,a);
    }
    vector<string> restoreIpAddresses(string s) {
        ans.clear();
        solve(s,0,vector<int>{});
        return ans;
    }
};