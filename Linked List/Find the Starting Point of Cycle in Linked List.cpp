class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         if(head==NULL){
            return NULL;
        }
        
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *entry=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;


            if(slow==fast){
                while(slow!=entry){
                    slow=slow->next;
                    entry=entry->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};
