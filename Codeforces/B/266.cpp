// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n, t; cin >> n >> t;
    string s;
    cin >> s;
    while(t--) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]); i++; }
        }
    }
    cout << s;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    foo();
    return 0;
}