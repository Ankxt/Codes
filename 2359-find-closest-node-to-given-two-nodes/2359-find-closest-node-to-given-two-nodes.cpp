int n,vis[100001];
class Solution {
public:
    void dfs(vector<int> ar[], int cnode,int d,vector<int> &a){
        vis[cnode]=1;
        a[cnode]=d;
        for(auto child:ar[cnode]){
            if(vis[child]==0)
                dfs(ar,child,d+1,a);
        }
    }
    int closestMeetingNode(vector<int>& edges, int n1, int n2) {
        n=edges.size();
        memset(vis,0,sizeof vis);
        vector<int> ar[n],him(n),her(n);
        for(int i=0; i<n; i++){ 
            him[i]=her[i]=-1;
            if(edges[i]==-1)
                continue;
            ar[i].push_back(edges[i]);
        }
        dfs(ar,n1,0,him);
        memset(vis,0,sizeof vis);
        dfs(ar,n2,0,her);
        int dis=1e9,inx=-1;
        for(int i=0; i<n; i++){
            if(him[i]!=-1 && her[i]!=-1){
                if(dis>max(her[i],him[i]))
                    inx=i,dis=max(her[i],him[i]);
            }
        }
        return inx;
        
    }
};