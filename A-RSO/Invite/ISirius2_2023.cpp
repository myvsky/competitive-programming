// Switching TV-channels

#include <bits/stdc++.h>

using namespace std;

void foo () {
    int n, k, p, u, res = 0, fk, bk;
    cin >> n >> k >> p >> u;
    if (p < k) bk = 1 + u / k + (u - 1) % k;
    if (p > n - k) fk = n - u/(n-k) + u % (n-k);
    while (p != u) {
    }
    cout << bk;
}

int main() {
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
    foo();
    return 0;
}