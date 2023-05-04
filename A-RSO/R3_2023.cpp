// https://codeforces.com/gym/104155/problem/3

#include <bits/stdc++.h>

#define all(x) x.begin(), x.end();
#define rall(x) x.rbegin(), x.rend();

using namespace std;
using ll = long long;
using vll = vector<long long>;

void foo() {
    int k, n;
    cin >> k >> n;
    vector<pair<int, int>> s;
    pair<int, int> cur_left_bottom_coord = {0, 0};
    for (int i = 0; i < n; i++) {
        char d;
        cin >> d;
        int a;
        cin >> a;
        if (d == 'N') cur_left_bottom_coord.second+=a;
        if (d == 'S') cur_left_bottom_coord.second-=a;
        if (d == 'W') cur_left_bottom_coord.first-=a;
        if (d == 'E') cur_left_bottom_coord.first+=a;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);

    int T = 1;
    // cin >> T;

    while (T--) foo();

    return 0;
}