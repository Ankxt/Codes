class Solution {
public:
    bool detectCapitalUse(string s) {
        bool a=true,b=true,c=true;
        for(auto itr:s){
            if(itr>='A' && itr<='Z')
                continue;
            a=false;
        }
        for(auto itr:s){
            if(itr>='a' && itr<='z')
                continue;
            b=false;
        }
        for(int i=0; i<s.size(); i++){
            if(i==0){
                if(s[i]>='A' && s[i]<='Z')
                    continue;
                c=false;
            }
            if(s[i]>='a' && s[i]<='z')
                continue;
            c=false;
        }
        return a|| b||c;
    }
};