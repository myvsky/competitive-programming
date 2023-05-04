#include <bits/stdc++.h>

using namespace std;

bool isBeautiful(int a, int b, int c, int d) {
    return a < b && c < d && a < c && b < d;
}

void foo() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // Try every position of rotation
    if (isBeautiful(a, b, c, d)) {
        cout << "YES\n";
        return;
    }
    if (isBeautiful(c, a, d, b)) {
        cout << "YES\n";
        return;
    }
    if (isBeautiful(d, c, b, a)) {
        cout << "YES\n";
        return;
    }
    if (isBeautiful(b, d, a, c)) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        foo();
    }
    return 0;
}
