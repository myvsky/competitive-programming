#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n, c1 = 0, c2 = 0, c3 = 0;
    cin >> n;
    map<string, int> mp;
    // Array of strings by person
    string s[3][n];
    // Person
    for (int i = 0; i < 3; i++) {
        // His strings
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
            mp[s[i][j]]++;
        }
    }
    for (int i = 0; i < 3; i++) {
        int res = 0;
        for (int j = 0; j < n; j++) {
            if (mp[s[i][j]] == 1) res+=3;
            if (mp[s[i][j]] == 2) res++;
        }
        cout << res << ' ';
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}