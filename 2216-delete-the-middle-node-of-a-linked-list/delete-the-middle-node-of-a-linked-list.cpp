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
        int count=0;
        ListNode* temp = head;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        } 
   if(count==1){
    return nullptr;
   }

count=count/2-1;
temp=head;
while(count){
    temp=temp->next;
    count--;
}
ListNode * del = temp->next;
temp->next=temp->next->next;
delete (del);
return head;



     }
};