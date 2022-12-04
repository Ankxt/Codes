#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<utility>
#include<cstring>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<iomanip>
#define ii pair<int,int>
#define vi vector<int>
#define MS 1000001
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define lli long long int
#define ulli unsigned long long int
#define fast_io  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define all(v) v.begin(),v.end()
static lli INF=1e9+7;
using namespace std;
template<typename T>
 bool comp(T a, T b){
   if(a<b)
     return true;
   return false;
 }
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
   fast_io;
   int n,m;
   cin>>n>>m;
   vector<string> v(n);
   set<int> row,column;
   for(int i=0; i<n; i++)
    cin>>v[i];
  int cnt=0,get=-1;
  for(int i=1; i<n; i++){
    int par=-1;
    int inx=-1;
    for(int j=1; j<m; j++){
      if(v[i][j]=='#' && v[i-1][j]!='#'){
          cnt++;
          inx=j;
          break;
      }
    }
    for(int j=m-2; j>=1; j--){
      if(v[i][j]=='#' && v[i-1][j]!='#' && j!=inx){
        cnt++;
        break;
      }
    }
    for(int j=0; j<m; j++){
      if(v[i][j]=='#')
        get=i;
    }
  }
  int inx=get;
    for(int j=1; j<m; j++){
      if(v[get][j]=='#'){
        cnt++;
        get=j;
        break;
      }
    }
    for(int j=m-2; j>=1; j--){
      if(v[inx][j]=='#' && j!=get){
        cnt++;
        break;
      }
    }
   cout<<cnt;
   
}
/*
.....
..#..
.###.
.###.
.....

*/