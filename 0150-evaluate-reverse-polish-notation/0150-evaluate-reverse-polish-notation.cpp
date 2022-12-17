class Solution {
public:
    int evalRPN(vector<string>& v) {
        stack<long long> st;
        int ans=0;
        for(int i=0; i<v.size(); i++){
            if(v[i].size()==1){
                if(v[i]>="0" && v[i]<="9")
                    st.push(stoll(v[i]));
                else{
                    long long a=st.top();
                    st.pop();
                    long long b=st.top();
                    st.pop();
                    // cout<<a<<' '<<b<<endl;
                    if(v[i]=="+")
                        st.push(a+b);
                    if(v[i]=="-")
                        st.push(b-a);
                    if(v[i]=="/")
                        st.push(b/a);
                    if(v[i]=="*")
                        st.push(a*b);
                }
            }
            else
                st.push(stoll(v[i]));
        }
        return st.top();
    }
};