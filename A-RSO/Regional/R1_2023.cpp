// Regional stage, 2022-2023
// https://codeforces.com/gym/104155/problem/1

#include <bits/stdc++.h>

#define all(x) x.begin(), x.end();

using namespace std;
using ll = long long;
using vll = vector<long long>;

// Find roots of the equation
ll findRoots(ll b, ll c) {
    // We get the following equation: (h+1)*(v+1) = (h+1) * (k-h+1)
    ll d = b*b - 4*c;
    // We can't get negative discriminant. It'd mean that we can't cut the paper
    // to satisfy the condition
    if (d < 0) return -1;

    // If we're not getting the integer value of discriminant, we can't cut the
    // paper in satisfying manner => return -1
    ll sqRoot = sqrt(d);
    if (!(sqRoot*sqRoot == d)) return -1;
    // Now we return the biggest root from the equation. If we are not getting
    // the integer value in root, we will return -1
    if (b >= sqRoot && (b - sqRoot) % 2 == 0) return (b - sqRoot) / 2;
    if ((b + sqRoot) % 2 == 0) return (b + sqRoot) / 2;
    return -1;
}

void foo() {
    // a - Oy
    // b - Ox
    ll a, b, k, m, v, h;
    cin >> a >> b >> k >> m;
    
    // Find amount of horizontal cuts
    // Following to equation (h + 1)(k - h + 1), our c member in formula [D = b*b - 4ac] 
    // is m - k - 1
    h = findRoots(k, m - k - 1);
    if (h == -1) { cout << "-1\n"; return; }
    v = k - h;
    if (h < a && v < b) { cout << h << " " << v << "\n"; return; }
    if (h < b && v < a) { cout << v << " " << h << "\n"; return; }
    cout << "-1\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);
    int T = 1;
    cin >> T;

    while (T--) foo();

    return 0;
}