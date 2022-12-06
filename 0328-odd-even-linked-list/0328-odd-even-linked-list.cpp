/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* a) {
        if(a==NULL)
            return a;
        ListNode *prev=a,*b=NULL,*c=NULL,*st=NULL,*val=a;
        // a=NULL;
        int cnt=1;
        while(a!=NULL){
            prev=a->next;
            if(cnt%2){
                if(b==NULL)
                    b=a;
                else b->next=a,b=b->next;
            }
            else{
                if(c==NULL)
                    c=a,st=a;
                else c->next=a,c=c->next;
            }
            a=prev;
            cnt++;
        }
        if(b)
        b->next=st;
        if(c)
            c->next=NULL;
        return val;
    }
};