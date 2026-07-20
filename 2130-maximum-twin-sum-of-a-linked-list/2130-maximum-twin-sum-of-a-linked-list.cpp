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
    int pairSum(ListNode* head) {
            int length=0;
            ListNode* current=head;

            //length count
            while(current != nullptr)
            {
                length++;
                current=current->next;
            }


           cout << length << endl;
            ListNode * reverseNodeStart=head;

            int i=0;
            while(i < (length/2))
            {
                reverseNodeStart=reverseNodeStart->next;
                i++;
            }

            ListNode * pre=nullptr;
            ListNode * cur=reverseNodeStart;;
             ListNode * next=nullptr;

            while(cur != nullptr)
            {
                
                next=cur->next;
                cur->next=pre;
                pre=cur;
                cur=next;
            }

            int max=0;
            while(head != nullptr && pre != nullptr)
            {
                if((head->val + pre->val) > max) 
                max=head->val + pre->val;

                head=head->next;
                pre=pre->next;
            }
            
            return max;

    }
};