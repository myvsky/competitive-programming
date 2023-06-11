#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n;
    cin >> n;
    if (n < 4) { cout << "-1\n"; return; }
    int m = n % 2? n: n - 1;
    for (int i = m; i >= 1; i -= 2) cout << i << ' ';
    cout << "4 2 ";
    for (int i = 6; i <= n; i +=2) cout << i << ' ';
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}