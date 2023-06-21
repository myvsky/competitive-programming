typedef long long ll;

#include <bits/stdc++.h>

using namespace std;

void foo() {
    ll n, k, q, c = 0, res = 0;
    cin >> n >> k >> q;
    // All len of subarrays that satisfy requirements
    vector<ll> sub;
    bool b = false;
    while (n--) {
        ll a;
        cin >> a;
        if (a > q) { 
            if (c && c >= k) sub.push_back(c); 
            c = 0;
        }
        else c++;
    }
    if (c >= k) sub.push_back(c);
    if (!sub.size()) { cout << "0\n"; return; }
    ll m = *max_element(sub.begin(), sub.end());
    for (ll i = k; i <= m; i++)
        for (auto x: sub) 
        // Number of subarrays of length i that can be formed from a subarray of length x
            if (x >= i) res += x - i + 1;
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}