int vis[26];
class Solution {
public:
    int c(char ch){
        return ch-'a';
    }
    int dfs(set<int> ar[], int cnode, int p){
        int a=cnode;
        vis[cnode]=1;
        for(auto child:ar[cnode]){
            if(vis[child]==0)
                a=min(a,dfs(ar,child,cnode));
        }
        return a;
    }
    string smallestEquivalentString(string s1, string s2, string s) {
        set<int> ar[26];
        for(int i=0; i<s1.size(); i++){
            ar[c(s1[i])].insert(c(s2[i]));
            ar[c(s2[i])].insert(c(s1[i]));
        }
        for(auto &i:s){
            memset(vis,0,sizeof vis);
            int a=dfs(ar,c(i),-1);
            if(c(i)>a)
                i=a+'a';
        }
        return s;
    }
};