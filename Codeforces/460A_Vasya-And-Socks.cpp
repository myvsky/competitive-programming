// https://codeforces.com/problemset/problem/460/A

#include <bits/stdc++.h>

#define all(x) x.begin(), x.end();
#define rall(x) x.rbegin(), x.rend();

using namespace std;
using ll = long long;
using vll = vector<long long>;

void foo() {
    int n, m, day = 0;
    cin >> n >> m;
    // We count until Vasya runs out of socks
    while (n > 0) {
        // When my buys a new pair, Vasya has one more day to walk in socks
        n--;
        day++;
        if (day % m == 0) n++;
    }
    cout << day << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T = 1;

    while (T--) foo();

    return 0;
}