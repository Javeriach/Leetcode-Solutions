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

        if(head == nullptr) return 0;
        ListNode * current=head;
        map<int,int>map;
        int result=0;
        int index=0;

        while(current != nullptr)
        {
          if(current == nullptr) break;
           map.insert({index,current->val});
            current=current->next;
            index++;
        }

        for(auto currentIndex:map)
        {
            cout << index << endl;
            if(currentIndex.first <= (index / 2) -1 )
            {
                cout <<  currentIndex.second + map[index-1-currentIndex.first]<<endl;
                result = max(result , currentIndex.second + map[index-1-currentIndex.first]);
            }
        }

        return result;
    }
};