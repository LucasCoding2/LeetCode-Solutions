class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        while(head != nullptr && head->val == val) {
            head = head->next;
        }
        if(head == nullptr) {
            return head;
        }
        ListNode* next = head->next;
        ListNode* current = head;
        while(next != nullptr) {
            if(next->val == val) {
                current->next = next->next;
                next = current->next;
            }
            else {
                current = current->next;
                next = current->next;
            }
            
        }
        return head;
    }
};
