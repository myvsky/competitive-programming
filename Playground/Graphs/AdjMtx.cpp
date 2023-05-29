/***
 * * * * * Pros * * * * *
 * Removing an edge takes O(1) time
 * Checking the existance of an edge from vertex p1 to vertex p2 takes O(1) time
 * * * * * Cons * * * * *
 * Takes O(V^2) space to store
 * Adding a vertex takes O(V^2) time
*/

#include <bits/stdc++.h>

using namespace std;

int main() { 
    int v, e;
    cout << "Enter number of verticies and edges:\n";
    cin >> v >> e;

    int adjMtx[v][v];
    cout << "Enter such pair of nodes (numerated nodes) that there's an edge between them:\n";
    for (int i = 0; i < e; i++) {
        int p1, p2;
        cin >> p1 >> p2;
        adjMtx[p1][p2] = 1;
        adjMtx[p2][p1] = 1;
        // If the graph is directed, just remove the second line
    }
    // This loop just returns the matrix VxV
    for (auto& x: adjMtx) {
        for (auto& y: x) {
            if (y > 1 || y < 0) cout << "0\t";
            else cout << y << "\t";
        }
        cout << "\n";
    }
    return 0;
}