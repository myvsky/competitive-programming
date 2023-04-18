/* https://codeforces.com/problemset/problem/1487/A */

#include <bits/stdc++.h>

using i64 = long long;

using namespace std;

void foo() {
    int n;
    cin >> n;
    int count = 0;
    vector<int> v;

    for (int i = 0; i < n; i++) { 
        int a;
        cin >> a;
        v.push_back(a);
    }

    // The answer is amount of non-min elements in vector of numbers
    int m = *min_element(v.begin(), v.end());
    for (auto i: v) if (m < i) count++;

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // int T = 1;
    int T;
    cin >> T;

    while (T--) foo();

    return 0;
}