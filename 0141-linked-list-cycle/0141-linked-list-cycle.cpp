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
    bool hasCycle(ListNode *Head) {
        ListNode*head=Head;
        ListNode*temp=Head;
        while(temp !=NULL && temp->next !=NULL){
            head=head->next;
            temp=temp->next->next;

            if(head==temp){
                return true;
            }
        }
      return false;
    }
};