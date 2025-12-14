class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        // Edge cases (added)
        if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        // Step 1: find last node & length
        ListNode* temp = head;
        int count = 1;

        while (temp->next != nullptr) {
            temp = temp->next;
            count++;
        }

        // Step 2: make list circular
        temp->next = head;

        // Step 3: correct rotation count
        k = k % count;
        int x = count - k;

        // Step 4: move pointers
        ListNode* prev = temp;
        temp = head;

        while (x != 0) {
            prev = temp;
            temp = temp->next;
            x--;
        }

        // Step 5: break the circle
        prev->next = nullptr;
        head = temp;

        return head;
    }
};
