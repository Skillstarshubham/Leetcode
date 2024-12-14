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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head->next;
        ListNode*ans=head;
        int sum=0;
        while(temp){
            sum+=temp->val;
            if(temp->val==0){
                head->val=sum;
                if(temp->next)
                head->next=temp;
                else 
                head->next=NULL;
                head=temp;
                sum=0;
            }
            temp=temp->next;
        }
        return ans;
    }
};