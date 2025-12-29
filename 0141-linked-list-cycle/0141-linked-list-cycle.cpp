/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return false;
        ListNode *t1=head;
        ListNode *t2=head;
        while(t1!=nullptr && t1->next!=nullptr){
            t1=t1->next->next;
            t2=t2->next;
            if(t1==t2){
                return true;
            }
        }
        return false;
    }
};