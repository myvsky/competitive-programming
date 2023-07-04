#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n;
    cin >> n;
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++) {
        int a_i;
        cin >> a_i;
        s.insert({a_i, i});
    }
    int l = 1, r = n;
    while (s.size() > 3) {
        auto minEl = *s.begin();
        auto maxEl = *prev(s.end());
        bool b1 = (minEl.second == l - 1 || minEl.second == r - 1),
        b2 = (maxEl.second == l - 1 || maxEl.second == r - 1);
        if (b1 || b2) {
            if (b1) { 
                s.erase(minEl);
                minEl.second == l - 1 ? l++ : r--;
            }
            if (b2) {
                s.erase(maxEl);
                maxEl.second == l - 1 ? l++ : r--;
            }
        }
        else {
            cout << l << ' ' << r << "\n";
            return;
        }
    }
    cout << "-1\n";
}


int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}