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
    ListNode* partition(ListNode* head, int x) {
        
       if(!head||head->next==nullptr)
           return head;
        
        ListNode *ptr=new ListNode(0,head);
        ListNode *newlist=new ListNode(0);
        ListNode *prev=ptr;
        ListNode *start=newlist;
        while(head!=NULL){
            ListNode *next=head->next;
            if(head->val < x){
                start->next = head;
                head->next = nullptr;
                start = start->next;
                prev->next = next;
            }else{
                prev=head;
            }
            head=next;
        }
        
        ListNode*temp=newlist;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=ptr->next;
        return newlist->next;
        
    }
};