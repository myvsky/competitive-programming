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