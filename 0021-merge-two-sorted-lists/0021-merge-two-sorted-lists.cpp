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
    ListNode* merge(ListNode* resultList, ListNode* list1Node,
                    ListNode* list2Node, ListNode* currentResultListNode) {

        if (resultList == nullptr) {
            if (list1Node->val < list2Node->val) {
                currentResultListNode = list1Node;
                resultList = currentResultListNode;
                merge(resultList, list1Node->next, list2Node,
                      currentResultListNode);
            } else {
                cout <<"case3 " <<list1Node->val << " "<< list2Node->val <<endl;
                currentResultListNode = list2Node;
                resultList = currentResultListNode;
                merge(resultList, list1Node, list2Node->next,
                      currentResultListNode);
            }
        }else if (list1Node != nullptr && list2Node == nullptr) {
            currentResultListNode->next = list1Node;
            currentResultListNode=currentResultListNode->next;
            merge(resultList, list1Node->next, list2Node,
                  currentResultListNode);

        }else if (list1Node == nullptr && list2Node != nullptr) {
            currentResultListNode->next = list2Node;
            currentResultListNode=currentResultListNode->next;
            merge(resultList, list1Node, list2Node->next,
                  currentResultListNode);

        }
        else if (list1Node == nullptr && list2Node == nullptr) {
            return resultList;

        }
        else if ((list1Node->val) < (list2Node->val)) {
            currentResultListNode->next = list1Node;
            currentResultListNode=currentResultListNode->next;
            merge(resultList, list1Node->next, list2Node,
                  currentResultListNode);
        }
         else {
            currentResultListNode->next = list2Node;
            currentResultListNode=currentResultListNode->next;
            merge(resultList, list1Node, list2Node->next,
                  currentResultListNode);
        }

        return resultList;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list1Node = list1;
        ListNode* list2Node = list2;
        ListNode* resultList = nullptr;
        ListNode* currentResultNode = nullptr;
        if (list1Node == nullptr && list2Node == nullptr) {
            return list1;
        }

        if (list1Node == nullptr && list2Node != nullptr) {
            return list2;
        }

        if (list1Node != nullptr && list2Node == nullptr) {
            return list1;
        }

        return merge(resultList, list1Node, list2Node, currentResultNode);
    }
};