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
        ListNode* first=head;
        ListNode* second=head;
        for(int i=0;i<n;i++){ //move first n steps from head
        first=first->next;   
        }

        //if first becomes null
        if(first==NULL){
        return head->next;
        }
        // moves both pointers
        while(first->next !=NULL)
        {
            first=first->next;
            second=second->next;
        }
        second->next=second->next->next; //remove nth node
        return head;
}
};