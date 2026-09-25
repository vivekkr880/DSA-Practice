/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *Head) {
        ListNode *head=Head;
        ListNode *last=Head;
        while(last !=NULL && last->next !=NULL)
        {
            head=head->next;
            last=last->next->next;
            
            if(last==head)
           {
            head=Head;
            while(head !=last){
            head=head->next;
            last=last->next;
           }
           return head;
        }
    }
    return NULL;
        
    }
};