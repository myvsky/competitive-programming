#include <bits/stdc++.h>

using namespace std;

void foo() {
    string s;
    cin >> s;
    int k = 0, res = 0;
    vector<int> vi;
    for (auto x: s) {
        if (x == '1') k++;
        else {
            if (k) vi.push_back(k);
            k = 0;
        }
    }
    if (k) vi.push_back(k);
    sort(vi.begin(), vi.end());
    reverse(vi.begin(), vi.end());
    for (int i = 0; i < vi.size(); i += 2) res += vi[i];
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}