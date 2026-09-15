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
      ListNode* curr1 = list1;
      ListNode* curr2 = list2;
      ListNode* curr3 = nullptr;
      ListNode* head = nullptr;
      while(curr1 != nullptr || curr2 != nullptr) {
        if(curr1 != nullptr && (curr2 == nullptr || curr1->val <= curr2->val)) {
            if(head == nullptr) {
                head = curr1;
                curr3 = head;
            }
            else {
                curr3->next = curr1;
                curr3 = curr3->next;
            }
            curr1 = curr1->next;
        }
        if(curr2 != nullptr && (curr1 == nullptr || curr2->val <= curr1->val)) {
            if(head == nullptr) {
                head = curr2;
                curr3 = head;
            }
            else {
                curr3->next = curr2;
                curr3 = curr3->next;
            }
            curr2 = curr2->next;
        }
      } 
    return head; 
    }
};
