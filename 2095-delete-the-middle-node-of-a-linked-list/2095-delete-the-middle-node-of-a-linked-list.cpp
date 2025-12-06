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
    ListNode* deleteMiddle(ListNode* head) {
         if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode* temp1=head;
        ListNode* temp2 = head;
        ListNode* prev =head;
        
        while(temp1!=nullptr && temp1->next != nullptr ){
            temp1=temp1->next->next;
            prev=temp2;
            temp2=temp2->next;

        }
        prev->next=temp2->next;
        temp2->next=nullptr;
        return head;
    }
};