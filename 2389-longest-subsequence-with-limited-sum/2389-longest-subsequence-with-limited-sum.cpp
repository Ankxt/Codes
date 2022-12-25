class Solution {
public:
    vector<int> answerQueries(vector<int>& v, vector<int>& q) {
        vector<int> ans,pre(v.size()+1,0);
        sort(v.begin(),v.end());
        for(int i=1; i<=v.size(); i++)
            pre[i]+=pre[i-1]+v[i-1];
        for(auto &i:q){
            ans.push_back(upper_bound(pre.begin(),pre.end(),i)-pre.begin()-1);
        }
        return ans;
    }
};