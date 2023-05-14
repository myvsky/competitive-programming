// https://leetcode.com/problems/queue-reconstruction-by-height/description/

// The idea is making a segment tree

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> segtree;
    
    void buildTree(int l, int r, int node) {
        if (l == r) {
            segtree[node] = 1;
            return;
        }
        
        int mid = (l+r)/2;
        buildTree(l, mid, 2 * node + 1);
        buildTree(mid + 1, r, 2 * node + 2);
        
        segtree[node] = segtree[2 * node + 1] + segtree[2 * node + 2];
    }

    /*
    *  @param l Left border of segment tree.
    *  @param r Right border of segment tree.
    *  @param value .
    */
    void findindex(int l, int r, int value, int node, int &i) {
        if (l > r) return;
        
        if (l == r) {   
            segtree[node]--;
            i = l;
            return;
        }
        
        int mid = (l+r)/2;
        segtree[node]--;
        if(segtree[2 * node + 1] - value > 0)
            findindex(l, mid, value, 2 * node + 1, i);
        else {
            value -= segtree[2 * node + 1];
            findindex(mid + 1, r, value, 2 * node + 2, i);
        }
    }
    
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n = people.size();
        int size = 1;
        while (size < n)
            size *= 2;
        int arrsize = size-1;
        size*=2;
        segtree.resize(size, 0);
        
        auto cmp = [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0]) return a[1] > b[1];
            return b[0] > a[0];
        };

        sort(people.begin(), people.end(), cmp);
        
        buildTree(0, n-1, 0);
        
        vector<vector<int>>res(n);
        
        for(int i = 0; i < n; i++) {
            int index = 0;
            findindex(0, n-1, people[i][1], 0, index);
            res[index].push_back(people[i][0]) ;
            res[index].push_back(people[i][1]);
        }
        
        return res;
    }
};