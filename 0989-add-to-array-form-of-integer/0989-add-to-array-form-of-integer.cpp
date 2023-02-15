class Solution {
public:
    vector<int> addToArrayForm(vector<int>& v, int k) {
        reverse(v.begin(),v.end());
        vector<int> a;
        while(k){
            a.push_back(k%10);
            k/=10;
        }
        vector<int> ans;
        int par=0;
        for(int i=0; i<min(v.size(),a.size()); i++){
            ans.push_back((v[i]+a[i]+par)%10);
            par=(v[i]+a[i]+par)/10;
        }
        int mini=min(v.size(),a.size());
        if(v.size()<a.size())
            v=a;
        for(int i=mini; i<v.size(); i++){
            ans.push_back((par+v[i])%10);
            par=(par+v[i])/10;
        }
        if(par)
            ans.push_back(par);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};