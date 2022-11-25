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
    void reorderList(ListNode* head) {
        if ((!head) || (!head->next) || (!head->next->next)) return;
        stack<ListNode*> s;
        ListNode* ptr = head;
        int size = 0;
        while(ptr){
            s.push(ptr);
            size++;
            ptr=ptr->next;
        }
            ptr = head;
        for (int j=0; j<size/2; j++){
            ListNode *temp = s.top();
            s.pop();
            temp->next = ptr ->next;
            ptr->next = temp;
            ptr=ptr->next->next;
        }
    ptr->next = NULL;
    }
};