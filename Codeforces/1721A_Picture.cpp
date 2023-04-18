/* https://codeforces.com/problemset/problem/1721/A */

#include <bits/stdc++.h>

using i64 = long long;

using namespace std;

void foo() {
    // Set of unique strings
    set<char> unique;

    string a;
    cin >> a;
    for (auto i: a) unique.insert(i);
    cin >> a;
    for (auto i: a) unique.insert(i);
    if (unique.size() == 4) cout << 3 << "\n";
    if (unique.size() == 3) cout << 2 << "\n";
    if (unique.size() == 2) cout << 1 << "\n";
    if (unique.size() == 1) cout << 0 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) foo();

    return 0;
}