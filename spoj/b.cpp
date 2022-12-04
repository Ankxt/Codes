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
   vi v(MS);

 int solve(int i, int j){
 	if(i>=j)
 		return 0;
 	int ans=INF;
 	for(int k=i; k<j; k++){
 		int tempans=solve(i,k)+solve(k+1,j)+v[i-1]*v[k]*v[j];
 		ans=min(ans,tempans);
 	}

 	return ans;
 }
int main(){
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
   for(int i=0; i<n; i++)
   	cin>>v[i];
   int ans=solve(1,n-1);
   cout<<ans<<endl;
}
   
}
