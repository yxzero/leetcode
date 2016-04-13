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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* result = new ListNode(0);
        ListNode* tr = result;
        int su = 0;
        while(temp1 && temp2)
        {
            su += (temp1->val + temp2->val);
            tr->next = new ListNode(su%10);
            su /= 10;
            temp1 = temp1->next;
            temp2 = temp2->next;
            tr = tr->next;
        }
        while(temp1)
        {
            su += temp1->val ;
            tr->next = new ListNode(su%10);
            su /= 10;
            temp1 = temp1->next;
            tr = tr->next;
        }
        while(temp2)
        {
            su += temp2->val ;
            tr->next = new ListNode(su%10);
            su /= 10;
            temp2 = temp2->next;
            tr = tr->next;
        }
        if(su != 0)
            tr->next = new ListNode(su);
        return result->next;
    }
};
