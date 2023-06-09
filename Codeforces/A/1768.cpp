/* https://codeforces.com/problemset/problem/1768/A */

#include <bits/stdc++.h>

using ll = long long;

using namespace std;

void foo() {
    ll k;
    cin >> k;

    // Factorial conversion here. x!+(x-1)! <=> (x-1)!(x+1), that's why we get x = k-1 as an answer:
    // when x = k-1, (x-1)!(x+1) <=> (k-1-1)!(k-1+1) <=> (k-2)!(k), so x is the closest integer to k
    // and in following equation it will always be multiple of k
    cout << k-1 << "\n";
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