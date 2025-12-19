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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* p1=nullptr;
        ListNode* p2=nullptr;
        int sum=0;
        int car=0;
        int valu=0;
        while(t1!=nullptr && t2!=nullptr){
            sum=t1->val+t2->val;
            sum+=car;
            car=sum/10;
            valu=sum%10;
            t1->val=valu;
            p1=t1;
            p2=t2;
            t1=t1->next;
            t2=t2->next;
        }
        if(t2!=nullptr){
            p1->next=t2;
            while(t2!=nullptr){
               sum=t2->val+car;
                car=sum/10;
                valu=sum%10;
                t2->val=valu;
                p2=t2;
                p1=t2;
                t2=t2->next;

            }
            if(car>0){
            ListNode* carry=new ListNode();
            carry->val=car;
            carry->next=nullptr;
            p1->next=carry;
        }
        }
        if(t1!=nullptr){
            p2=nullptr;
            while(t1!=nullptr){

                sum=t1->val+car;
                car=sum/10;
                valu=sum%10;
                t1->val=valu;
                p1=t1;

                t1=t1->next;
                
            }
            if(car>0){
            ListNode* carry=new ListNode();
            carry->val=car;
            carry->next=nullptr;
            p1->next=carry;
        }
        }
        if(car>0){
            ListNode* carry=new ListNode();
            carry->val=car;
            carry->next=nullptr;
            p1->next=carry;
        }
        
        return l1;
    }
};