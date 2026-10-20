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
        int ans=0;
        ListNode* temp=head;
        while(temp){
            ans=ans*2+temp->val;
            temp=temp->next;
        }
    return ans;
    }
};
/*class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int size = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        int ans = 0;
        temp = head;

        for (int i = size - 1; i >= 0; i--) {
            if (temp->val == 1) {
                ans += pow(2, i);
            }
            temp = temp->next;
        }

        return ans;
    }
};*/