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
        map<int,int>storeRoom;
        ListNode* result=nullptr;
        ListNode* resultIterator=nullptr;
        ListNode * cur=head;


        while(cur != nullptr)
        {
            if(storeRoom.find(cur->val) != storeRoom.end())
            cur=cur->next;
            else
            {
                storeRoom[cur->val]=cur->val;

                if(cur == head)
                {
                    result= new ListNode (cur->val,nullptr);
                resultIterator=result;
                }else
                {
                    resultIterator->next=new ListNode  (cur->val,nullptr);
                    resultIterator=resultIterator->next;
                }

            }
        }

    return result;
    }
};