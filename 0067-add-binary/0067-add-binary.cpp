class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        char par='0';
        string ans;
        int i;
        for(i=0; i<min(a.size(),b.size()); i++){
            if(a[i]==b[i]){
                if(a[i]=='0'){
                    ans+=par;
                    par='0';
                }
                else{
                    if(par=='1')
                        ans+='1';
                    else ans+='0';
                    par='1';
                }
            }
            else{
                if(par=='1')
                    ans+='0',par='1';
                else ans+='1',par='0';
            }
        }
        if(a.size()<b.size())
            a=b;
        for(; i<max(a.size(),b.size()); i++){
            if(a[i]=='1'){
                if(par=='1')
                    ans+='0',par='1';
                else ans+='1',par='0';
                
            }
            else{
                ans+=par;
                par='0';
            }
        }
        if(par=='1')
            ans+=par;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};