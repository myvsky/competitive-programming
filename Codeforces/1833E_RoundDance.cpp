#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n;
    cin >> n;
    vector<int> a(n);
    /**
     * @var g : undirected graph of neighbours 
    */
    vector<set<int>> g(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // Let a[i] in graph represent the person that a[i+1] person remembers
        a[i]--;
        g[i].insert(a[i]);
        g[a[i]].insert(i);
    }
    /**
     * @var d : degrees of each node from @var g
    */
    vector<int> d(n);
    for (int i = 0; i < n; ++i) {
        d[i] = g[i].size();
    }
    /**
     * @var vis : track of visited elements during graph traversal
    */
    vector<bool> vis(n);
    // Just counters
    int bamboos = 0, cycles = 0;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            vis[i] = true;
            queue<int> q;
            q.push(i);
            vector<int> component = {i};
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int v: g[u]) {
                    if (!vis[v]) {
                        vis[v] = true;
                        q.push(v);
                        component.push_back(v);
                    }
                }
            }
            bool bamboo = false;
            for (int j: component) { 
                if (d[j] == 1) { 
                    bamboo = true; 
                    break; 
                } 
            }
            if (bamboo) bamboos++;
            else cycles++;
        }
    }
    cout << cycles + min(bamboos, 1) << ' ' << cycles + bamboos << '\n';
}

int main() {
    int T;
    cin >> T;
    while (T--) foo();
    return 0;
}