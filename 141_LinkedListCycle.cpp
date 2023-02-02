/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // solved using 2 pointers, slow(p) moves from one node to nest, fast(q) moves at twice the speed. if q reaches null then there is no cycle. Time = O(n)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        bool cycle = false;
        ListNode* p , *q;
        p = q = head;
        while(p && p->next){
            p = p->next;
            q = q->next;
            if(q) q=q->next;
            else return false;
            if(!q) return false;
            if (p == q)return true;
        }
        return cycle;
    }
};