class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        vector<int> ar[101],ans;
        for(int i=0; i<v.size(); i++)
            ar[v[i]].push_back(i);
        for(int i=0; i<v.size(); i++){
            int inx=1e9;
            for(int j=v[i]+1; j<101; j++){
                auto her=upper_bound(ar[j].begin(),ar[j].end(),i);
                if(her==ar[j].end())
                    continue;
                inx=min(inx,*her);
            }
            if(inx==1e9){
                ans.push_back(0);
            }
            else
            ans.push_back(inx-i);
        }
        return ans;
    }
};