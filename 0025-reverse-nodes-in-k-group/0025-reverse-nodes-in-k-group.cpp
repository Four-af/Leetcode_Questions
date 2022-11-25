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
    int length(ListNode* head)
    {
        int count = 0;
        while (head)
        {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode *head, int k)
    {
        int n = length(head);
        if (head == NULL || n < k)
        return head;
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forward = NULL;

            int count = 0;
            while (count != k && curr != NULL)
            {
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
                count++;
            }
            head->next = reverseKGroup(forward, k);
            return prev;
    }
};