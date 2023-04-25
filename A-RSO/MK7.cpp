// Municipal Stage, Krym, 2022-2023. Task 7

#include <bits/stdc++.h>

#define all(x) x.begin(), x.end();

using namespace std;
using ll = long long;
using vll = vector<long long>;

void foo() {
    ll x1, x2, count = 0;
    cin >> x1 >> x2;

    for (x1; x1<=x2; x1++) {
        string ss = to_string(x1);
        bool isBeauty = false;
        if (ss.size() == 1) { count++; continue; };
        for (int i = 0; i < ss.size()-1; i++) {
            // If we got it, count
            if (ss[i]-'0' == ss[i+1]-'0'+1 || ss[i]-'0' == ss[i+1]-'0'-1) isBeauty = true;
            // If we don't, stop it
            else { isBeauty = false; break; }
            }
        if (isBeauty) count++;
    }
    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) foo();

    return 0;
}