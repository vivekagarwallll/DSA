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
        ListNode * temp = head;
        unordered_map<ListNode*,int>mpp;
        while(temp!=NULL){
            temp=temp->next;
            if(mpp.find(temp)==mpp.end()){
                mpp[temp]=1;
            }
            else{
                return true;
            }
        }
return false;

    }
};