/* https://codeforces.com/problemset/problem/1560/C */

#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vll = vector<long long>;

void foo() {
    i64 n;
    cin >> n;
    // Find the right square in range of which our n is
    i64 k = ceil(sqrt(n));
    if (k*k-n < k) cout << k << " " << k*k-n+1 << "\n";
    else cout << k*2 - k*k + n - 1 << " " << k << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) foo();

    return 0;
}