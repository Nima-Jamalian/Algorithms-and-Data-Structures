/*
83. Remove Duplicates from Sorted List
Easy 

Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

Example 1:


Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]
 

Constraints:

The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.

Topics
Linked List
*/

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
    //Time O(n) | Space O(1)
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* cur = head;
        while(cur->next != NULL){
            if(cur->val == cur->next->val){
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }
        return head;
    }
};
//Two pointer approach
/*
        if(head == NULL || head->next == NULL) return head;
        ListNode* prev = head;
        ListNode* tail = head->next;
        while(tail != NULL){
            if(prev->val == tail->val){
                prev->next = tail->next;
                tail = tail->next;
            } else {
                tail = tail->next;
                prev = prev->next;
            }
        }
        return head;
*/