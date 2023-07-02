// Input:
// n = 4
// 1->2->3->4
// Key = 3
// Output:
// True
// Explanation:
// 3 is present in Linked List, so the function returns true.


class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        if(head->data==key)
        {
            return true;
        }
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            if(temp->data==key){
                return true;
            }
        }
        return false;
    }
};
