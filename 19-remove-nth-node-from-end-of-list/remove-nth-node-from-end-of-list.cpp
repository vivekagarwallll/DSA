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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * fast = head ;
        ListNode * slow= head;
        while(n){
fast=fast->next;
n--;
        }
        if(fast==nullptr){
                            ListNode * del = head;
                            head=head->next;
                            delete(del);
                            return head;

        }
        while(fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
                ListNode * dele = slow->next;
        slow->next=slow->next->next;
        delete(dele);
        return head;
            }
};