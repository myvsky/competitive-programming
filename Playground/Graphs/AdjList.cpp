/***
 * * * * * Pros * * * * *
 * Takes O(V+E) space
 * Easy to add vertex
 * Computing all neighbours of a vertex takes optimal time
 * * * * * Cons * * * * *
 * In case of (V, 2) number of edges takes O(V^2) time
 * Checking the existance of edge between vertex takes O(V) time
*/

#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V) {
    for (int v = 0; v < V; v++) {
        cout << v;
        for (auto x: adj[v]) cout << " -> " << x;
        cout << endl;
    }
}

int main() {
    int V;
    cout << "Enter amount of verticies:\n";
    cin >> V;
    vector<int> adj[V];
    cout << "Enter pairs of edges (considering they're enumerated):\n";
    for (int i = 0; i < V; i++) {
        int a, b;
        cin >> a >> b;
        addEdge(adj, a, b);
    }
    printGraph(adj, V);
    return 0;
}