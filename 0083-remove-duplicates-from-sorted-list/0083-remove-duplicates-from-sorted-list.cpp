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
    ListNode* deleteDuplicates(ListNode* head) {
    
       if(head == nullptr) return nullptr;
       if(head != nullptr && head->next == nullptr) return head;
       ListNode * pre=head;
       ListNode * cur=head->next;

       while(cur != nullptr && pre != nullptr)
       {
             if(cur->val == pre->val)
             {
                pre->next=cur->next;
                cur=cur->next;
             }
             else
             {
                pre=cur;
                cur=cur->next;
             }
       }
       
        return head;

    }
};