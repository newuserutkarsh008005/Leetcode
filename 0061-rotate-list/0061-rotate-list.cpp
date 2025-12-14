class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        ListNode* temp = head;
        int count = 1;

        while (temp->next != nullptr) {
            temp = temp->next;
            count++;
        }

        temp->next = head;

        k = k % count;
        int x = count - k;

        ListNode* prev = temp;
        temp = head;

        while (x != 0) {
            prev = temp;
            temp = temp->next;
            x--;
        }

        prev->next = nullptr;
        head = temp;

        return head;
    }
};
