node* addListNumbers(node* a, node* b){
    long long sum=0;
    vector<long long> v;
    while(a!=NULL){
        v.push_back(a->data);
        a=a->next;
    }
    reverse(v.begin(),v.end());
    for(long long i=0,j=1; i<v.size(); i++,j*=10ll){
        sum+=(v[i])*j;
    }
    v.clear();
    while(b!=NULL){
        v.push_back(b->data);
        b=b->next;
    }
    reverse(v.begin(),v.end());
    for(long long i=0,j=1; j<v.size(); i++,j*=10ll){
        sum+=(v[i])*j;
    }
    v.clear();
    node* n=new node(),ans=new node();
    ans=n;
    while(sum){
        n->data=sum%10;
        sum/=10;
        node* y=new node();
        if(sum){
            n->next=y;
            n=n->next;
        }
    }
    return ans;

}