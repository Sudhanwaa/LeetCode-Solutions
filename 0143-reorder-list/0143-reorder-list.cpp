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
        
        stack<int> s;

        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
int k=count;

        if(count%2==0){

            count=count/2  ;
        }

        else count/=2;

        int x=0;

        temp=head;

        while(temp){

            
            if(x>count) {
                s.push(temp->val);
                    
                }

            temp=temp->next;
            x++;
        }

        x=0;
    temp=head;
        while(x!=count){
            x++;
            temp=temp->next;
        }



        temp->next=NULL;

        temp=head;

        ListNode* one=head;
        ListNode* two=head->next;

        while(!s.empty()){
            ListNode* q=new ListNode(s.top());

            one->next=q;
            q->next=two;

            one=two;
            two=two->next;
            s.pop();
        }


    }
};