#include <bits/stdc++.h>

using namespace std;

void foo() {
    string s, s1 = "", s2 = "";
    cin >> s;
    bool b = false;
    for (auto x: s) {
        if (x == ' ') { b = true; break; }
        if (b) s2 += x;
        else s1 += x;
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}