
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while (prev->next != nullptr) {
            ListNode* temp = prev->next;

            if (temp->next != nullptr &&
                temp->val == temp->next->val) {

                while (temp->next != nullptr &&
                       temp->val == temp->next->val) {
                    temp = temp->next;
                }

                prev->next = temp->next;
            } else {
                prev = prev->next;
            }
        }

        return dummy->next;
    }
};
