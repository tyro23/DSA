// Input:
// LinkedList: 1->2->3->4->5
// Output: 3 
// Explanation: 
// Middle of linked list is 3.


class Solution{
    public:
    int getMiddle(Node *head)
    {
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
};
