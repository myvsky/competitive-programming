// Each element is separate set initially

/** We want to:
 * 1. Combine two given sets
 * 2. Tell if two elements are in the same set or not
*/

#include <bits/stdc++.h>
using namespace std;

/**
 * @var parent : contains the node of the tree
 * @var ranks : by default is set to 1. Represents the minimal height of a tree
*/
unordered_map<int, int> parent, ranks;

/**
 * @param u : element from the first set
 * @param v : element from the second set
 * We want to combine those two elements
 * Time complexity: O(n)
*/
void combine(int u, int v) {
    u = find(u);
    v = find(v);

    if (u == v) return; // Already in the set

    parent[v] = u;
}

// Traverse from the element u to the root of the tree
int find(int u) {
    if (u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}

//////////////////////// Union by size approach //////////////////////////

// Time complexity: O(log(n))

void combine(int u, int v) {

    u = find(u);
    v = find(v);

    if (u == v) return;
    
    // If the size of set that contains u is greater than the one that contains v 
    if (ranks[u] > ranks[v]) {
        // Then u is parent of v
        parent[v] = u;
        // Update the size of set that contains u
        ranks[u] += ranks[v];
    }
    else {
        parent[u] = v;
        ranks[v] += ranks[u];
    }
}