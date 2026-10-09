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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> nodes;
       ListNode*temp1=headA;
       while(temp1!=NULL){
               nodes.insert(temp1);
               temp1=temp1->next;
       }
       ListNode*temp2=headB;
       while(temp2!=NULL){
               if(nodes.find(temp2)!=nodes.end()) return temp2;
               temp2=temp2->next;
       }
       return NULL;
    }
};