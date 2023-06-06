#include <bits/stdc++.h>
using namespace std;

void foo() {
    int a, b;
    cin >> a >> b;
    cout << min(min(a, b), (a + b) / 4) << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) foo();
    return 0;
}