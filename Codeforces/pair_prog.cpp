#include <bits/stdc++.h>

using i64 = long long;

using namespace std;

void foo() {
    string s;
    cin >> s;
    vector<int> vi;
    int ans = 0;
    int k = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            while (s[i]) {
                i++;
                k++;
            }
            vi.push_back(k);
        }
    }
    for (int i=0; i+1<vi.size(); i+=2) {
        ans+=vi[i];
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // int T = 1;
    int T;
    cin >> T;

    for (i64 i = 0; i < T; i++) foo();

    return 0;
}