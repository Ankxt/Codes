class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int zer=count(s.begin(),s.end(),'0'),cnt=1e9,one=count(s.begin(),s.end(),'1'),to=0,tz=0;
        for(int i=0,n=s.size(); i<n; i++){
            if(s[i]=='1')
                to++;
            else tz++;
            cnt=min(cnt,to+zer-tz);
        }
        return min({cnt,one,zer});
    }
};