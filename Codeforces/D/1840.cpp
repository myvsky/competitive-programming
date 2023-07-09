#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    // Bin search, optimal pattern for each carver: l, m and r patterns
    int l = 0, r = 1e9;
    while (r - l > 1) {
        int m = (l + r) / 2,
        i = 1, j = n - 1;
        while (i < n - 1 && a[i] - a[0] <= 2*m) i++;
        while ()
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}