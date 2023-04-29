// Municipal stage, Krym, 2022-2023. Task 4

/*
    Given integer N. Need to find maximum integer k, such that N=x^k. 2<=N<=10^18
    input:
    64
    18
    9
    1331
    125
    1e18
    output:
    6
    1
    2
    3
    3
    18
*/

#include <bits/stdc++.h>

#define all(x) x.begin(), x.end();

using namespace std;
using ll = long long;
using vll = vector<long long>;

void foo() {
    ll n, x, k;
    cin >> n;

    // Minimal number that we power up
    x = 2;
    // Minimal degree of that number
    k = 2;

    // If number is not the right square, print "1"
    // Brute force
    while (pow(x, k) != n and x <= ceil(sqrt(n))) {
        // If we don't get the right answer, move to the next x value
        if (pow(x, k) > n) { x++; k = 2; }
        // Otherwise we just increase degree value
        else k++;
    }
    if (pow(x, k) == n) cout << k << "\n";
    else cout << "1\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) foo();

    return 0;
}