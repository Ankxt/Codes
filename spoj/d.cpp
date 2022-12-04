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
    int n,m,h;
    cin>>n>>m>>h;
    if(n%2!=0 && m%2!=0 && h==1)
        cout<<"YES";
    else{
        int cnt=0,ans=0;
        while(n%2==0){
            n=n/2;
            cnt++;
        }
        ans+=2*cnt;
        cnt=0;
        while(m%2==0){
            m=m/2;
            cnt++;
        }
        ans=ans*2*cnt;
      if(ans<h)
        cout<<"NO";
    else cout<<"YES";
    }
    cout<<endl;
   }
   
}
