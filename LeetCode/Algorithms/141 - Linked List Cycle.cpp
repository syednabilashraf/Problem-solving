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
    bool hasCycle(ListNode *head) {
        
        if (head == NULL || head -> next == NULL)
            return false;
        
        ListNode* fast_node = head;
        ListNode* slow_node = head;
        
        while (fast_node != NULL && fast_node -> next != NULL)
        {
            fast_node = fast_node -> next -> next;
            slow_node = slow_node -> next;
            if (slow_node == fast_node)
                return true;
        }
        return false;
    }
};