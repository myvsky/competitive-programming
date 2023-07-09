#include <bits/stdc++.h>

using namespace std;

void foo() {

    vector<string> s(2);
    int t, q;

    cin >> s[0] >> s[1] >> t >> q;
    int bp = 0;

    for (int i = 0; i < s[0].size(); i++)
        if (s[0][i] != s[1][i]) bp++;

    queue<pair<int, int>> b;

    for (int i = 0; i < q; i++) {

        while (!b.empty() && b.front().first == i) {
            if (s[0][b.front().second] != s[1][b.front().second]) bp++;
            b.pop();
        }

        int com;
        cin >> com;

        if (com == 1) {
            int pos;
            cin >> pos; pos--;
            if (s[0][pos] != s[1][pos]) bp--;
            b.emplace(i + t, pos);
        }
        else if (com == 2) {
            int s1, pos1, s2, pos2;
            cin >> s1 >> pos1 >> s2 >> pos2;
            s1--; pos1--; s2--; pos2--;

            if (s[s1][pos1] != s[1 ^ s1][pos1]) bp--;
            if (s[s2][pos2] != s[1 ^ s2][pos2]) bp--;

            swap(s[s1][pos1], s[s2][pos2]);

            if (s[s1][pos1] != s[1 ^ s1][pos1]) bp++;
            if (s[s2][pos2] != s[1 ^ s2][pos2]) bp++;
        }
        else cout << (bp? "NO\n": "YES\n");
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}