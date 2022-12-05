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
    ListNode* middleNode(ListNode* a) {
        if(a->next==NULL)
            return a;
        ListNode* b=a;
        while(b!=NULL && b->next!=NULL){
            a=a->next;
            b=b->next;
            b=b->next;
        }
        return a;
    }
};