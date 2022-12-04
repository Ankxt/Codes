class Solution {
public:
    int minimumAverageDifference(vector<int>& v) {
        long sum=accumulate(v.begin(),v.end(),0ll),inx=0,ans=1e10+8,till=0;
        for(int i=0; i<v.size(); i++){
            sum-=v[i];
            till+=v[i];
            long her=till/(i+1),him=sum/max(int(v.size()-i-1),1);
            
            if(abs(her-him)<ans)
                inx=i,ans=abs(her-him);
        }
        return inx;
    }
};