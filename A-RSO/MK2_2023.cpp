// Municipal stage, Krym, 2022-2023

/*
    Given 2 strings containing only lowercase latin characters. Need to return common chars.
    If none of common chars was found, return "epidemic".
*/

#include <bits/stdc++.h>

#define all(x) x.begin(), x.end();

using namespace std;
using ll = long long;
using vll = vector<long long>;

void foo() {
    string s, s1;
    set<char> res;
    cin >> s >> s1;

    for (auto x: s) if (s1.find(x) != string::npos) res.insert(x);
    for (auto x: res) cout << x;
    if (res.size() == 0) cout << "epidemic\n";
    else cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) foo();

    return 0;
}