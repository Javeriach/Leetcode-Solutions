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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* resultHeader=nullptr;
        ListNode * result=nullptr;
       
        if(list1 == nullptr && list2 == nullptr) return nullptr;
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;

        ListNode* list1Node=list1;
        ListNode* list2Node=list2;

        while(list1Node != nullptr && list2Node != nullptr)
        {
           
            if( list1Node->val < list2Node->val ){
                 if(result == nullptr){ 
                    resultHeader=list1Node;
                    result=resultHeader;
                    }
                 else {
                    result->next=list1Node;
                    result=result->next;
                    }
                 list1Node=list1Node->next;
                 cout << result->val <<endl;
            }else 
             {
                 if(result == nullptr) {resultHeader=list2Node;
                    result=resultHeader;}
                 else {result->next=list2Node;
                 result=result->next;}
                 list2Node=list2Node->next;
                 cout << result->val <<endl;
            }
        }

        while(list1Node != nullptr)
        {
             
             result->next=list1Node;
             result=result->next;
            list1Node=list1Node->next;
           
        }

        while(list2Node != nullptr)
        {
             result->next=list2Node;
             result=result->next;
            list2Node=list2Node->next;
           
        }

        return resultHeader;
    }
};