#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n;
    cin >> n;

    vector<int> nights;
    // Store 2^i, i<=n values
    for (int i = 1; i <= n; i*=2) {
        nights.push_back(i);
        n -= i;
    }
    if (n > 0) {
        nights.push_back(n);
        sort(nights.begin(), nights.end());
    }
    cout << nights.size() - 1 << "\n";
    for (int i = 1; i < nights.size(); i++) cout << nights[i] - nights[i-1] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}