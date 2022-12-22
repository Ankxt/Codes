//Keep Calm and Jai Shri Ram
#include<bits/stdc++.h>
using namespace std;
#define lli                         long long int
#define vi                          vector<int>
#define ii                          pair<int,int>
#define all(v)                      v.begin(),v.end()
#define getunique(v)                {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define pb                          push_back
#define ff                          first
#define ss                          second
#define endl                        "\n"
#define fast_io                     ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MS=1000001;
const lli INF=1e9+7;

template<class T>
bool comp(T a, T b){
    if(a<b)
        return true;
    return false;
}
vector<vi > val(MS,vi(2));
vi vis(MS),ans;
class Solution {
public:
    void setit(int n){
        for(int i=0; i<=n; i++)
            vis[i]=0;
    }
    vi dfs(vi ar[], int cnode){
        vis[cnode]=1;
        int nod=0,findis=0;
        for(auto child:ar[cnode]){
            if(vis[child]==0){
                vi a=dfs(ar,child);
                nod+=a[1];
                findis+=a[0];
            }
        }
        val[cnode]={findis+nod,nod};
        return {findis+nod,nod+1};
    }
    void dfs1(vi ar[], int cnode, int p, int n){
        vis[cnode]=1;
        if(p!=-1)
        {
            ans[cnode]=val[cnode][0]+(ans[p]-val[cnode][0]-val[cnode][1]-1)+(n-val[cnode][1]-1);
        }
        for(auto child:ar[cnode]){
            if(vis[child]==0)
                dfs1(ar,child,cnode,n);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& e) {
        vi ar[n];
        ans.resize(n);
        setit(n);
        for(auto i:e)
            ar[i[0]].pb(i[1]),ar[i[1]].pb(i[0]);
        dfs(ar,0);
        setit(n);
        ans[0]=val[0][0];
        dfs1(ar,0,-1,n);
        return ans;
    }
};