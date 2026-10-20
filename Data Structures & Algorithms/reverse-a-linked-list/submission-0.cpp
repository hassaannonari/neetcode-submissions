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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next ==nullptr){
            return head;
        }
        
        ListNode* rptr = head;
        ListNode* prev = nullptr;
        ListNode* temp = rptr->next;
        while(temp!=nullptr){
            rptr->next= prev;
            prev = rptr;
            rptr= temp;
            temp = temp->next;
        }
        if(temp==nullptr){
        rptr->next = prev;
        head = rptr;
        }
        return head;
    }
};
