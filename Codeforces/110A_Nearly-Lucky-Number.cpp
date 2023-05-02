// https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>

#define all(x) x.begin(), x.end();
#define rall(x) x.rbegin(), x.rend();

using namespace std;
using ll = long long;
using vll = vector<long long>;

void foo() {
    std::string s;
    cin >> s;
    int k = 0;
    for (auto x: s) {
        if (x == '7' || x == '4')
        k++;
    }
    if (k == 7 || k == 4) cout << "YES\n";
    else cout << "NO\n";
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