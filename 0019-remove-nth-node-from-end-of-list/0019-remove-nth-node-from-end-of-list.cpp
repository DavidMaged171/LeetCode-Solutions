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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz=sizeOfList(head);
        int NthFromStart=sz-n;
        if(NthFromStart==0)
        {
            return head->next;
        }
        ListNode* temp=head;
        for(int i=1;i<NthFromStart;i++)
        {
            temp=temp->next;
        }
        ListNode* curr=temp->next;
        temp->next=temp->next->next;
        return head;
        
    }
    private: int sizeOfList(ListNode* head)
    {
        int sz=0;
        while(head->next)
        {
            sz++;
            head=head->next;
        }
        sz++;
        return sz;
    }
};