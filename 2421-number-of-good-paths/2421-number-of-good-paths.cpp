int par[100001];
class Solution {
public:
    int find(int a){
        if(par[a]==a)
            return a;
        return par[a]=find(par[a]);
    }
    void unio(int a, int b){
        int para=find(a),parb=find(b);
        if(para!=parb)
            par[para]=parb;
    }
    int numberOfGoodPaths(vector<int>& v, vector<vector<int>>& e) {
        int n=v.size();
        vector<int> ar[n];
        iota(par,par+n,0);
        map<int,vector<int> > m;
        for(auto i:e){
            if(v[i[0]]<=v[i[1]])
                ar[i[1]].push_back(i[0]);
            if(v[i[1]]<=v[i[0]])
                ar[i[0]].push_back(i[1]);
        }
        for(int i=0; i<n; i++)
            m[v[i]].push_back(i);
        long long ans=n;
        for(auto [val,a]:m){
            for(auto cnode:a){
                for(auto child:ar[cnode]){
                    unio(cnode,child);
                }
            }
            unordered_map<int,long long> her;
            for(auto i:a)
                her[find(i)]++;
            for(auto itr:her)
                ans+=(itr.second)*(itr.second-1)/2;
            
        }
        return ans;
        
        }
};