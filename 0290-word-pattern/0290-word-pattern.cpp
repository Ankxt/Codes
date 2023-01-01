class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string> v;
        string t;
        for(int i=0; i<s.size(); i++){
            if(isspace(s[i])){
                v.push_back(t);
                t="";
                continue;
            }
            t+=s[i];
        }
        v.push_back(t);
        if(v.size()!=p.size())
            return false;
        map<char,string> m;
        map<string,char> n;
        for(int i=0; i<p.size(); i++){
            if(m.count(p[i])){
                if(m[p[i]]!=v[i])
                    return false;  
            }
            else m[p[i]]=v[i];
            if(n.count(v[i])){
                if(n[v[i]]!=p[i])
                    return false;
            }
            else n[v[i]]=p[i];
        }
        return true;
    }
    
};