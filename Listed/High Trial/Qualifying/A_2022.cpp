// A. Polygons

#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n, m;
    // Amount of verticies
    cin >> n;
    if (n <= 3) { cout << "0"; return; }
    if (n == 4) { cout << "2\n1 3\n2 4"; return; }
    cout << n - 3 << "\n";
    for (int i = 3; i < n; i++) 
        cout << "1 " << i << "\n";
}

int main() {
    foo();
    return 0;
}