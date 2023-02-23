class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        int n=p.size();
        vector<vector<int> > v;
        for(int i=0; i<n; i++)
            v.push_back({c[i],p[i]});
        sort(v.begin(),v.end());
        int i=0;
        priority_queue<int> q;
        while(k--){
            while(i<n && v[i][0]<=w)
                q.push(v[i][1]),i++;
            if(q.empty())
                break;
            w+=q.top();
            q.pop();
        }
        return w;
    }
};