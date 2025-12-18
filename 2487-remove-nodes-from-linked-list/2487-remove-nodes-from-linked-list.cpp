class Solution {
public:
    ListNode* removeNodes(ListNode* head) {

        // 1. Reverse the list
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* nxt = nullptr;

        while (curr != nullptr) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        head = prev;   // reversed list

        // 2. Filter using max-so-far
        int maxVal = head->val;
        curr = head;

        while (curr->next != nullptr) {
            if (curr->next->val < maxVal) {
                // remove node
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
                maxVal = curr->val;
            }
        }

        // 3. Reverse back
        curr = head;
        prev = nullptr;

        while (curr != nullptr) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;
    }
};
