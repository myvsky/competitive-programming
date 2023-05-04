/* https://codeforces.com/problemset/problem/1702/B */

#include <bits/stdc++.h>

using ll = long long;

using namespace std;

void foo() {
    string s;
    cin >> s;
    set<char> vc;
    ll count = 0;

    // Just memorize 3 elements and clear it when it's more than 3
    for (int i = 0; i < s.size(); i++) {
        vc.insert(s[i]);
        if (vc.size() > 3) { count++; vc.clear(); vc.insert(s[i]); }
    }

    if (vc.size() != 0) count++;

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) foo();

    return 0;
}