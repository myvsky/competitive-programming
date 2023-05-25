/*
https://cp-algorithms.com/data_structures/disjoint_set_union.html
https://leetcode.com/discuss/general-discussion/1072418/Disjoint-Set-Union-(DSU)Union-Find-A-Complete-Guide

*/

#include <bits/stdc++.h>

using namespace std;


// In-width
class BySize {
    unordered_map<int, int> parent;
    unordered_map<int, int> rank;
    public:
    int find(int u) {
        if (u == parent[u]) return u;
        // Let nodes attach directly to the root element
        return parent[u] = find(parent[u]);
    }

    void combine(int u, int v) {
        u = find(u);
        v = find(v);

        // If in the same set, no actions required
        if (u == v) return;
        parent[v] = u;
    }

    void build(int v) {
        parent[v] = v;
        rank[v] = 1;
    }
};

// In-depth
class ByRank {
    unordered_map<int, int> parent;
    unordered_map<int, int> rank;
    public:
    int find(int u) {
        if (u == parent[u]) return u;
        // Let nodes attach directly to the root element
        return parent[u] = find(parent[u]);
    }

    void combine(int u, int v) {
        u = find(u);
        v = find(v);

        // If in the same set, no actions required
        if (u == v) return;
        parent[v] = u;
    }

    void build(int v) {
        parent[v] = v;
        rank[v] = 1;
    }
};