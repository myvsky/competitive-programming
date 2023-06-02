// Switching TV-channels

#include <bits/stdc++.h>

using namespace std;

int s(int p, int u, int k) {
    if (p > u) swap(p, u);
    int diff = u - p,
    lp = diff / k,
    a1 = lp + diff % k,
    a2 = (lp + 1) + (k - diff % k);
    return min(a1, a2);
}

void foo () {
    int n, k, p, u;
    cin >> n >> k >> p >> u;
    cout << min(
        s(p, u, k),
        min(
            (p - 1 + k - 1) / k + s(1, u, k),
            (n - p + k - 1) / k + s(n, u, k))
    );

}

int main() {
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
    foo();
    return 0;
}