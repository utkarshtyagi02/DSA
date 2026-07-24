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
    ListNode* addTwoNumbers(ListNode* num1, ListNode* num2) {

        ListNode* dummyHead = new ListNode(-1);
        ListNode* cur = dummyHead;

        ListNode* temp1 = num1;
        ListNode* temp2 = num2;

        int carry = 0;

        while (temp1 != NULL || temp2 != NULL) {

            int sum = carry;

            if (temp1 != NULL) {
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if (temp2 != NULL) {
                sum += temp2->val;
                temp2 = temp2->next;
            }

            carry = sum / 10;

            ListNode* newNode = new ListNode(sum % 10);

            cur->next = newNode;
            cur = cur->next;
        }

        if (carry != 0) {
            cur->next = new ListNode(carry);
        }

        return dummyHead->next;
    }
};
