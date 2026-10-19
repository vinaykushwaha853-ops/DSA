
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;

        return head;
    }
};

/*
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        int size = 0;
        ListNode* temp = head;

        // Step 1: Length nikaalo
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        // Step 2: Middle se pehle wale node tak jao
        int index = size / 2 - 1;
        temp = head;

        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }

        // Step 3: Middle node skip karo
        temp->next = temp->next->next;

        return head;
    }
};
*/
