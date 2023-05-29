#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n, k;
    cin >> n >> k;
    int most = 5 - k;
    // Fits the requirement
    int count = 0;
    while (n--) {
        int y;
        cin >> y;
        if (y <= most) count++;
    }
    cout << count / 3;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    foo();
    return 0;
}