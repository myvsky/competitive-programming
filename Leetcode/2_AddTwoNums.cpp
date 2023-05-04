// https://leetcode.com/problems/add-two-numbers/

#include <iostream>

using namespace std;

struct ListNode {
    // Current value stored in node
     int val;
     // Pointer to the next node in linked list
     ListNode *next;
     // Default contstructor, not linked to another ListNode
     ListNode() : val(0), next(nullptr) {}
     // Constructor with x value and don't link it to another ListNode
     ListNode(int x) : val(x), next(nullptr) {}
     // 
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Avoid the null pointers
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        int sum = l1->val + l2->val;

        // Create ListNode object, initialize it with value 0 at allocated memory
        ListNode* l3 = new ListNode(0);
        l3->next = addTwoNumbers(l1->next, l2->next);
        if (sum < 10) l3->val = sum;
        else { 
            l3->val = sum - 10;
            ListNode* remainder = new ListNode(1);
            l3->next = addTwoNumbers(remainder, l3->next);
        }
        return l3;
    }
};