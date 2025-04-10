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
        map<ListNode* ,int> map;

        ListNode * current= headA;
        while(current != nullptr)
        {
           map.insert({current,0});
           current=current->next;   
        }

        current = headB;
        while(current != nullptr)
        {
                if(map.find(current) != map.end())
                {
                    return current;
                }
                current=current->next;
        }

        return nullptr;

    }
};