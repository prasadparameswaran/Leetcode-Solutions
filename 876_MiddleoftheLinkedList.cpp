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

 // Base on 2 pointers. Fast ptr moves at 2x speed as that of slow. Slow moves one step at a time. When fast reach end slow reaches mid. T(n) = O(n), S(n) =1
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow, *fast;
        slow = fast = head;
        while(slow && fast){
            fast = fast->next;
            if(fast){fast = fast->next; slow = slow->next;}
            else return slow;
        }
        return slow;
    }
};