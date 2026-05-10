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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
            ListNode* prev = nullptr;
            ListNode* curr = slow;
            while(curr != NULL){
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
        }
        ListNode* head1 = head;
        ListNode* head2 = prev;
        while(head1 && head2){
            ListNode* temp1 = head1->next;
            ListNode* temp2 = head2->next;
            head1->next = head2;
            head2->next = temp1;
            head1 = temp1;
            head2 = temp2;
        }
    }
};
