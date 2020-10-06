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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* initial = head;
        while (head != NULL && head -> next != NULL)
        {
            if (head -> val == head -> next -> val)
            {
                ListNode* temp = head -> next;
                head -> next = temp -> next;
            }
            else
                head = head -> next;
        }
        return initial;
    }
};