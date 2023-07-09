#include <bits/stdc++.h>

using namespace std;

void foo() {
    // Left and right boundaries of binary search
    // Setting left one to -1 because it's possible to have 0
    // waiting time
    int n, l = -1, r = 1e9;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    while (r - l > 1) {
        int m = (l + r) / 2,
        i = 1, j = n - 2;
        // i and j for finding range of patterns that can be made within m time

        // As first carver can make any toy with pattern in range of
        // [a[0], a[0] + 2*m] and the third one in the range of [a[n-1] - 2*m, a[n-1]]
        // So in 2 while loops we find the largest range [a[i], a[j]] outside of
        // two ranges mentioned previously
        while (i < n && a[i] - a[0] <= 2*m) i++;
        while (j >= 0 && a[n - 1] - a[j] <= 2*m) j--;

        // If i <= j then there are some toy patterns outside of the ranges and
        // those patterns can be made by 1 and 3 carvers within m time. It means
        // that 2 carver must make all the toys with patterns [a[i], a[j]]

        // If a[j] - a[i] <= 2*m then it's possible for second carver to make
        // all these toys within m time, so it's possible to achieve maximum
        // waiting time of m (that's why we update r = m)
        i > j || a[j] - a[i] <= 2*m? r = m: l = m;
    }
    cout << r << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) foo();
    return 0;
}