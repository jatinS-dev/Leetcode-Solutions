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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int size = 0;
        ListNode *temp = head;
        while(temp!=NULL){
            temp = temp -> next;
            size++;
        }
        if(size < k)    return head;   

        // Base call
        if(head == NULL)
            return NULL;

        // Step 1 - Reverse first k nodes
        ListNode *curr = head, *prev = NULL, *next = NULL;
        int count = 0;
        while(curr != NULL && count <k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Step 2 - Use recursion to reverse rest of the nodes
        if(next!=NULL){
            head->next = reverseKGroup(next, k);
        }

        // Step 3 - Return head
        return prev;
    }
};