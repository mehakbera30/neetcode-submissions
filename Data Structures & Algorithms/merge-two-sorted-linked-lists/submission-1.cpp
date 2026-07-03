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
         ListNode dummy(0);
        ListNode* ans = &dummy;
        ListNode* left = list1;
        ListNode* right = list2;

        while (left != nullptr && right != nullptr) {
            if (left->val <= right->val) {
                ans->next = left;
                left = left->next;
            }
            else {
                ans->next = right;
                right = right->next;
            }
            ans = ans->next;
        }
        while (left != nullptr) {
            ans->next = left;
            left = left->next;
            ans = ans->next;
        }
        while (right != nullptr) {
            ans->next = right;
            right = right->next;
            ans = ans->next;
        }
        return dummy.next;
    }
};
