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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*, int > list1;
        ListNode * A=headA;
        ListNode * B=headB;

        while(A != nullptr)
        {
            list1[A]=A->val;
            A=A->next;
        }


        while(B != nullptr)
        {
            if(list1.find(B) != list1.end()) return B;
            B=B->next;
        }
      return 0;
        
    }
};