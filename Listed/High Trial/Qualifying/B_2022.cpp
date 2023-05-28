// B. Morning part-time job
// Dijkstra algorithm works here

#include <bits/stdc++.h>

using namespace std;


void foo() {
    unordered_map<int, vector<pair<int, int>>> tree;
    int n, m, s, t, a, b, c;
    cin >> n >> m >> s >> t;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        tree[a].push_back({b, c});
        tree[b].push_back({a, c});
    }
    vector<int> dist(n + 1, 1e9);
    vector<int> newspapers(n + 1, 0);
    vector<int> prev(n + 1);

    priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, greater<>> pq;
    dist[s] = 0;
    pq.push({{0, 0}, s});
    while (!pq.empty()) {
        int d = pq.top().first.first;
        int np = pq.top().first.second;
        int u = pq.top().second;
        pq.pop();
        if (d > dist[u]) continue;
        for (auto &x : tree[u]) {
            int v = x.first;
            int w = x.second;
            if (dist[v] > dist[u] + w || (dist[v] == dist[u] + w && newspapers[v] <
            newspapers[u] + 1)) { 
                dist[v] = dist[u] + w;
                newspapers[v] = newspapers[u] + 1;
                prev[v] = u;
                pq.push({{dist[v], newspapers[v]}, v});
            }
        }
    }
    cout << dist[t] << endl;
    cout << newspapers[t] - 1 << endl;

    vector<int> path;
    int curr = t;
    while (curr != s) {
        if (curr != t) path.push_back(curr);
        curr = prev[curr];
    }
    reverse(path.begin(), path.end());
    for (int house : path) {
        cout << house << ' ';
    }
}

int main() {
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    foo();
    return 0;
}