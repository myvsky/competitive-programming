// https://leetcode.com/problems/add-two-numbers/
/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
*/
#include <iostream>

using namespace std;

struct ListNode
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        // Avoid the null pointers
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;


        int sum = l1->val + l2->val;
        // Create ListNode object
        ListNode* l3;
        l3 = new ListNode(0);
    }
};
int main()
{
    return 0;
}