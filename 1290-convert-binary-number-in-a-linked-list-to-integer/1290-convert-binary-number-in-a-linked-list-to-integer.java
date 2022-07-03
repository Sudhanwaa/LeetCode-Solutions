/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int getDecimalValue(ListNode head) {
        
        ListNode temp=head;
        String s="";
        while(temp!=null){
            
           // s= s.insert(0,temp.val);
            s=s+temp.val;
            temp=temp.next;
            
        }
        
        //Integer.parseInt("1010",2)
        
        //Integer.parseInt(s); 
        
        int ans=Integer.parseInt(s,2);
        return ans;
        
    }
}