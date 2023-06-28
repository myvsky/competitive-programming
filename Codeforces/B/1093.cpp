#include <bits/stdc++.h>

using namespace std;

void foo() {
    string s;
    cin >> s;
    int arr[26] = {0};
    unordered_set<char> usc;
    for (char x: s) {
        arr[x - 'a']++;
        usc.insert(x);
    }
    if (usc.size() == 1) { cout << "-1\n"; return; }
    for (int i = 0 ; i < 26; i++) while (arr[i]--) cout << static_cast<char>(i + 'a');
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}