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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        ListNode *temp=head;
        ListNode *front=head;
        ListNode*check=head;
        int n=0;
        while(check!=NULL){
             n++;
             check=check->next;
        }
         k=k%n;
         if(k==0) return head;
        for(int i=0;i<k;i++){
           front=front->next;
        }
        while(front->next!=NULL){
            front=front->next;
            temp=temp->next;
        }
        ListNode * temp2=temp->next;
        temp->next=NULL;
        front->next=head;
        return temp2;
    }
};