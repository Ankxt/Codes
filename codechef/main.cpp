#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<utility> 
#include<cstdio> 
#include<cstring> 
#include<stack> 
#include<queue> 
#include<map> 
#include<iomanip> 
#define vii vector< pair<int,int> >
#define vi vector<int>
#define INF 1000000007
#define MS 1000001
#define endl "\n"
#define ff first
#define ss second
#define lli long long int
#define ulli unsigned long long int
using namespace std;
int main() {
 //ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
     string s;
     cin>>s;
     map<char,int> m;
      for(int i=0; i<s.size(); i++)
            m[s[i]]++;
      int cnt=0;
      for(auto itr:m){
        if(itr.ss>2){
          int a=itr.ss/3;
          cnt+=a;
          m[itr.ff]-=3*a;
        }
      }
      for(auto itr:m){
        bool her=false;
        for(auto it:m){
          if(it.ff==itr.ff)
          continue;
          if(((itr.ss==2 && it.ss==1 )||(itr.ss==1 && it.ss==2))){
            m[it.ff]=0;
            m[itr.ff]=0;
            cnt++;
            break;
            her=true;
          }
        }
      }
      int tw=0;
      for(auto itr:m)
      if(itr.ss==2)
      tw++;
      int a=tw/3;
      cnt+=a*2;
      if(abs(tw-3*a)==2)
      cnt++;
      cout<<cnt<<endl;
   }
}