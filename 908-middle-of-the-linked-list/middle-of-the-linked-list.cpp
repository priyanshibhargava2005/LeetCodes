/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int c = 0;

        // Count the number of nodes in the list
        while (temp != NULL) {
            c++;
            temp = temp->next;
        }

        // Calculate the middle index (0-based indexing)
        int mid = c / 2;

        // Reset temp to the head of the list
        temp = head;

        // Move to the middle node
        for (int i = 0; i < mid; i++) {
            temp = temp->next;
        }

        return temp;
    }
};
