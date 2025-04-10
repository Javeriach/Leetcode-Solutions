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
    int getDecimalValue(ListNode* head) {
        int num = 0;
        string number = "";

        ListNode* cur = head;
        while (cur != nullptr) {
            number = number + to_string(cur->val);
            cur = cur->next;
        }
        // method to covert to decimal

        int length=number.length()-1;
        int i=0;
        int result=0;
        int index=length;
        while(i <= length)
        {
            int digit;
            if(number[index] == '1') digit=1;
            else digit = 0;
            cout << digit << " " << pow(2,i) <<endl;
                result+=  digit * pow(2,i);
                index--;
                i++;
        }
        return result;
    }
};