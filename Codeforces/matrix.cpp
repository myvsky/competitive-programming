/* https://codeforces.com/problemset/problem/1772/B */

#include <bits/stdc++.h>

using i64 = long long;

using namespace std;

void foo() {
    vector<int> v;
    for (short i = 0; i < 4; i++) { int a; cin >> a; v.push_back(a); }

    int m = *min_element(v.begin(), v.end());

    if ((v[0] < v[1]) && (v[2] < v[3]) || (v[0] > v[1]) && (v[2] > v[3])) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // int T = 1;
    int T;
    cin >> T;

    for (i64 i = 0; i < T; i++) foo();

    return 0;
}