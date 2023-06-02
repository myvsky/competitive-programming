// https://codeforces.com/problemset/problem/115/A

#include <bits/stdc++.h>

using namespace std;

// Max depth of a tree
int m = -1;
// Hierarchy
vector<int> hi[2001];

void dfs(int v, int lvl) {
    m = max(m, lvl);
    for (int i: hi[v]) dfs(i, lvl + 1);
}

void foo() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a != -1) hi[a].push_back(i);
        // Store absolute roots in hi[0]
        else hi[0].push_back(i);
    }
    for (int i = 0; i < hi[0].size(); i++) dfs(hi[0][i], 1);
    cout << m;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    foo();
    return 0;
}
