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
        ListNode* A=headA;
        unordered_map<ListNode*,int> mp;

        while(A){
           mp[A]=1;
           A=A->next;
        }

        ListNode* T=headB;
        while(T){
            if(mp[T]) return T;

            T=T->next;
        }
        return NULL;
    }
};
