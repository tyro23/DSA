// Input:
// LinkedList: 1->2->3->4->5
// Output: 5
// Explanation: Count of nodes in the 
// linked list is 5, which is its length.


class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int c=0;
        while(head!=NULL){
            c++;
            head=head->next;
        }
        return c;
    
    }
};
