#include <bits/stdc++.h>

using namespace std;

void foo() {
    string s1, s2;
    cin >> s1 >> s2;
    // Array of 26 zeros which represent chars
    int a[26] = {0};
    for (char x: s2) a[x - 'A']++;

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    // Index of current position in string s2
    int i = 0;

    for (char x: s1) {
        // Element from s1 is not appearing in the s2 (free to delete)
        if (!a[x - 'A']) continue;
        // If character doesn't correspond the position in s2 then we can't
        // form s2
        if (x != s2[i]) { cout << "NO\n"; return; }
        i++;
        a[x - 'A']--;
    }

    for (int i: a) {
        if (i) { cout << "NO\n"; return; }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}