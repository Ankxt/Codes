#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int> > v(n);
    pair<int,int> ans={0,0};
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        v[i]={b,a};
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n-1; i++){
        if(v[i+1].first-v[i].first>v[ans.first].first-v[ans.second].first)
            ans={i+1,i};
    }
    cout<<v[ans.first].second<<' '<<v[ans.second].second;

    
    
}