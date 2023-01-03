class Solution {
public:
    int minDeletionSize(vector<string>& v) {
        int cnt=0;
        for(int i=0; i<v[0].size(); i++){
            string s,t;
            for(int j=0; j<v.size(); j++){
                s+=v[j][i];
                t+=v[j][i];
            }
            sort(s.begin(),s.end());
            cnt+=(s!=t);
        }
        return cnt;
    }
};