class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int add) {
        int n=c.size();
        vector<int> v(n,0);
        iota(v.begin(),v.end(),0);
        sort(v.begin(),v.end(),[&](int a, int b){
            return c[a]-r[a]<c[b]-r[b];
        });
        int cnt=0;
        for(int &a:v){
            if(add<c[a]-r[a])
                break;
            add-=(c[a]-r[a]);
            cnt++;
            
        }
        return cnt;
    }
};