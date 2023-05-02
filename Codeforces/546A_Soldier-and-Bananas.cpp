// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>

#define all(x) x.begin(), x.end();
#define rall(x) x.rbegin(), x.rend();

using namespace std;
using ll = long long;
using vll = vector<long long>;

void foo() {
    int k, n, w, res = 0;
    cin >> k >> n >> w;
    for (ll i = 1; i <= w; i++) n -= k * i;
    cout << (n < 0? n * (-1): 0) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);

    int T = 1;
    // cin >> T;    

    while (T--) foo();

    return 0;
}