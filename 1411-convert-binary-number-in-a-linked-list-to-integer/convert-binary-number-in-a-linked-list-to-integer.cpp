/**

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        struct ListNode *temp;
        int l=0;
        temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        int b=0;
        temp = head;
        while(temp!=NULL){
            b=b+temp->val*pow(2,l-1);
            l--; 
            temp=temp->next;
        }  
    return b;
    }   
};
