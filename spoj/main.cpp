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
#include<iomanip>
#define ii pair<int,int>
#define vi vector<int>
#define INF 1000000007
#define MS 1000001
#define endl "\n"
#define ff first
#define ss second
#define lli long long int
#define ulli unsigned long long int
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<lli> v(n);
    for(int i=0; i<n; i++)
      cin>>v[i];
    sort(v.begin(),v.end(),greater<lli> ());
    lli a=v[0]*v[1]*v[2]*v[3]*v[4],b=v[0]*v[n-1]*v[n-2]*v[n-3]*v[n-4],c=v[0]*v[1]*v[2]*v[n-1]*v[n-2];
    cout<<max(a,max(b,c))<<endl;

   }
   
}
