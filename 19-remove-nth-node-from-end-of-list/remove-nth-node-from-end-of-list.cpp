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
         ListNode * temp = head;
         int count=1;
while(temp!=nullptr && temp->next!=nullptr){
    count++;
    temp=temp->next;
}
if(count==n){
    head=head->next;
    return head;
}
cout<<count;
temp=head;
count=count-n-1;
while(count){
    temp=temp->next;
    count--;
}
ListNode * del = temp->next;
temp->next=temp->next->next;
delete(del);

return head;
    }
};