//Keep Calm and Jai Shri Ram
#include<bits/stdc++.h>
using namespace std;
#define int                         long long
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
// const lli INF=1e9+7;

template<class T>
bool comp(T a, T b){
    if(a<b)
        return true;
    return false;
}

signed main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    fast_io;
    int k,rem=0;
    cin>>k;
    set<int> s;
    int ans=0;
    do{
        while(rem<k){
            rem*=10ll;
            rem+=7;
            ans++;
        }
        rem%=k;
        if(s.count(rem)){
            ans=-1;
            break;
        }
        s.insert(rem);
    }while(rem!=0);
    cout<<ans;
    
    
}