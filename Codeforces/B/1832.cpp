#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void foo() {
    ll n, k, sum = 0;
    cin >> n >> k;
    ll a[n], p[n + 1];
    for (int i = 0; i < n; i++) cin >> a[i];
    p[0] = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++) p[i+1] = p[i] + a[i];
    for (int i = 0; i <= k; i++) sum = max(sum, p[n - k + i] - p[2 * i]);
    cout << sum << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) foo();
    return 0;
}