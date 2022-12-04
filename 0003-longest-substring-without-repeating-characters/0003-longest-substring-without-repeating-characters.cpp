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
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        set<char> st;
        for(int i=0,j=0; i<s.size(); i++){
            while(j<i && st.count(s[i]))
                st.erase(s[j++]);
            st.insert(s[i]);
            ans=max(ans,(int)st.size());
        }
        return ans;
    }
};