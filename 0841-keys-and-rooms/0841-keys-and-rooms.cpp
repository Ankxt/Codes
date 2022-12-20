class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& v) {
        vector<int> vis(v.size());
        queue<int> q;
        for(int i=0; i<v[0].size(); i++)
            q.push(v[0][i]);
        vis[0]=1;
        while(!q.empty()){
            int cnode=q.front();
            q.pop();
            if(vis[cnode])
                continue;
            vis[cnode]=1;
            for(auto child:v[cnode]){
                if(vis[child]==0)
                    q.push(child);
            }
            
        }
        return accumulate(vis.begin(),vis.end(),0)==vis.size();
        
    }
};