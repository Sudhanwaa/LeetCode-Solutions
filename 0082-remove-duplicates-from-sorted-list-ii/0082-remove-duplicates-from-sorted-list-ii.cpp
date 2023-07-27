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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* ans=new ListNode(-1);
        ans->next=head;
        ListNode* temp=ans;
        

        

        while(temp->next && temp->next->next){

            if(temp->next->val==temp->next->next->val){
                int k=temp->next->val;

                while(temp->next!=NULL && temp->next->val==k){
                    temp->next=temp->next->next;
                }
            }

            else temp=temp->next;
        }

        return ans->next;
        
    }
};