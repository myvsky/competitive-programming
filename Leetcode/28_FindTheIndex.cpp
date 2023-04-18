// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static int strStr(string haystack, string needle) {
        if (haystack.find(needle) != string::npos) return haystack.find(needle);
        return -1;
    }
};

int main() {
    // Amount of testcases
    int T = 1;
    cin >> T;
    
    string haystack, needle;
    while (T--) {
        cin >> haystack >> needle;
        cout << Solution::strStr(haystack, needle);
    }
    return 0;
}