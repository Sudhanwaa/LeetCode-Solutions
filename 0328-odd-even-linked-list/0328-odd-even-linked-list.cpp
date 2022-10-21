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
    ListNode* oddEvenList(ListNode* head) {
        
        vector<int> odd;
        vector<int> even;
        
        ListNode* temp=head;
        int i=0;
        while(temp!=NULL){
            if(i%2==0) even.push_back(temp->val);
            temp=temp->next;
            i++;
        }
        
        temp=head;
        i=0;
        while(temp!=NULL){
            if(i%2!=0) odd.push_back(temp->val);
            temp=temp->next;
            i++;
        }
        
        vector<int> ans;
        
        for(auto i: even) ans.push_back(i);
        
        for(auto i:odd) ans.push_back(i);
        
        for(auto i: ans) cout<<i;
        
        temp=head;
        
        for(auto i:ans){
            temp->val=i;
            temp=temp->next;
            
        }
        return head;
    }
};