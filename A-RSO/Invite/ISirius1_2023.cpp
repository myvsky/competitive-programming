// Long-time training

#include <bits/stdc++.h>

using namespace std;

void foo() {
    int n, m, s, p;
    cin >> n >> m >> s >> p;
    // Count everything in seconds and only after that convert the result in minutes
    int res = (n*(m*60+s)+(n-1)*p);
    cout << res / 60 << " " << res % 60;
}

int main() {
    int T = 1;
    while (T--) foo();
    return 0;
}