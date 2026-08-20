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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) {
            return nullptr;
        }
        ListNode* prevNode = nullptr;
        ListNode* node = head;
        ListNode* nextNode = head->next;
        while(nextNode != nullptr) {
            node->next = prevNode;
            prevNode = node;
            node = nextNode;
            nextNode = nextNode->next;
        }
        node->next = prevNode;
        return node;
    }
};
