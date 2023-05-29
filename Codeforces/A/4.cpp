#include <bits/stdc++.h>

using namespace std;

void foo() {
    int w;
    cin >> w;
    if (w == 2) cout << "NO";
    else if (w % 2) cout << "NO";
    else cout << "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(nullptr);
    foo();
    return 0;
}