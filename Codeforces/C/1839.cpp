#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n;
    cin >> n;
    int a[n];
    vector<int> p;
    for (int i = 0; i < n; i++) cin >> a[i];
    if (a[n-1]) { cout << "NO\n"; return; }
    cout << "YES\n";
    int len = 1;
    for (int i = 1; i <= n; i++) {
        if (!a[i-1]) {
            p.push_back(len);
            len = 1;
        }
        else len++;
    }
    reverse(p.begin(), p.end());
    for (auto x: p) {
        for (int i = 1; i < x; i++) cout << "0 ";
        cout << x-1 << ' ';
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) foo();
    return 0;
}