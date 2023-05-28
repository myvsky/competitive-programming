#include <bits/stdc++.h>

using namespace std;
// Solving using Disjoint Set Union method

class Solution {
public:
    unordered_map<int, int> mp, rank;
    unordered_set<int> uni;

    // By default all nodes have only 1 child
    int maxRank = 1;

    int dsu(int v) {
        // If graph node is the root, we return this node
        if (mp[v] == v) return v;
        // Otherwise we compress the graph and connect second-layer
        // nodes to the root
        return mp[v] = dsu(mp[v]);
    }
    void merge(int a, int b) {
        a = dsu(a);
        b = dsu(b);
        mp[b] = a;
        rank[a] += rank[b];
        maxRank = max(maxRank, rank[a]);
    }
    int longestConsecutive(vector<int>& nums) {
        if (!nums.size()) return 0;
        // Create tree, numerize its nodes
        for (const auto& x: nums) {
            mp[x] = x;
            rank[x] = 1;
            uni.insert(x);
        }

        for (const auto& x: uni) 
            if (mp.count(x-1)) merge(x, x-1);
        return maxRank;
    }
};