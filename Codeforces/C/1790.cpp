#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n;
    cin >> n;
    int a[n][n-1];
    vector<int> c(n+1, 0);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n-1; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++) c[a[i][0]]++;
    int first = max_element(c.begin(), c.end()) - c.begin();
    for (int i = 0; i < n; i++) {
        if (a[i][0] != first) {
            cout << first << ' ';
            for (int j = 0; j < n-1; j++)
                cout << a[i][j] << ' ';
            cout << "\n";
            return;
        }
    }
}   

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}