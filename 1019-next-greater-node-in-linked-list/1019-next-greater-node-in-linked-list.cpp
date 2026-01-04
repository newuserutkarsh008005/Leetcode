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
  ListNode*reverselinked(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* nxt=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>nums;
        stack<int>stc;
        head=reverselinked(head);
        ListNode* temp=head;
        while(temp!=nullptr){
            while(!stc.empty() && stc.top()<=temp->val){
                stc.pop();
            }
            if(stc.empty()){
                
                nums.push_back(0);
            }
            else{
                nums.push_back(stc.top());
            }
            stc.push(temp->val);
            temp=temp->next;
        }
         reverse(nums.begin(),nums.end());
         return nums;
    }
};