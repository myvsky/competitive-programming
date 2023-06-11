#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
        cout << i << ' ';
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) foo();
    return 0;
}