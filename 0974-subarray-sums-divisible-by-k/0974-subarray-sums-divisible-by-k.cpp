class Solution {
public:
    int ch(int a, int k){
        while(a<0)
            a+=k;
        return a%k;
    }
    int subarraysDivByK(vector<int>& v, int k) {
        int ans=0,sum=0;
        unordered_map<int,int> m;
        for(int i=0; i<v.size(); i++){
            v[i]=ch(v[i],k);
            sum+=v[i];
            sum%=k;
            m[sum]++;
            if(sum==0)
                ans+=m[sum];
        }
        for(auto itr:m){
            if(itr.first==0)
                continue;
            ans+=itr.second*(itr.second-1)/2;
        }
        return ans;
    }
};