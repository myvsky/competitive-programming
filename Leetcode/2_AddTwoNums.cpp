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

int main() {
    // create the first linked list
    int n;
    cout << "Input values of first list in range [0; 9]. When finished, input -1.\n";
    cin >> n;
    ListNode* l1 = new ListNode(n);
    ListNode* curr1 = l1;
    while (cin >> n && n != -1) {
        curr1->next = new ListNode(n);
        curr1 = curr1->next;
    }

    // create the second linked list
    cout << "Input values of second list in range [0; 9]. When finished, input -1.\n";
    cin >> n;
    ListNode* l2 = new ListNode(n);
    ListNode* curr2 = l2;
    while (cin >> n && n != -1) {
        curr2->next = new ListNode(n);
        curr2 = curr2->next;
    }

    // call the addTwoNumbers function
    ListNode* result = Solution::addTwoNumbers(l1, l2);

    // print the result
    ListNode* curr3 = result;
    while (curr3 != nullptr) {
        cout << curr3->val << " ";
        curr3 = curr3->next;
    }

    return 0;
}
