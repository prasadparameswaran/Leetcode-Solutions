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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *out = nullptr;
        ListNode *last;

        // find the head
        if (list1!= nullptr && list2!= nullptr) {
            if(list1->val < list2->val){
            out = list1;
            last = list1;
            list1 = list1->next;
            }
            else{
            out = list2;
            last = list2;
            list2 = list2->next;
            }
        }else if (list1 != nullptr){
            out = last = list1;
            list1 = list1->next;
        }else if (list2 != nullptr){
            out = last = list2;
            list2 = list2->next;
        }
            
        // merge while both the lists are not empty
        while(list1 && list2){
                cout << "in";
            
            if (list1->val < list2->val){
                last->next = list1;
                last = list1;
                list1 = list1->next;
            }else{
                last->next = list2;
                last = list2;
                list2 = list2->next;
            }
        }
        
        //copy remaining elements of list 1
        while(list1){
            last->next = list1;
            last = list1;
            list1 = list1->next;
        }
        //copy remaining elemens of list 2 
        while(list2){
            last->next = list2;
            last = list2;
            list2 = list2->next;
        }
        return out;   
    }
};