#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n, m;
    cin >> n >> m;
    /**
     * Universal solution, no need to work with n and m values.
     * Take the biggest value of n (1129) and the lowest value of m (1).
    */
    int len = 400;
    cout << string(len, '5') << "\n" << (string(len - 1, '4') + '5');
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    foo();
    return 0;
}