/* https://codeforces.com/problemset/problem/1560/C */

#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vll = vector<long long>;

void foo() {
    i64 n;
    cin >> n;
    // Find the high right square in range of which our n is
    i64 k = ceil(sqrt(n));

    // 2*k is range between k^2 and (k-1)^2 excludively. It's important to understand.
    // We include the highest square num and exclude the lowest one, so we will play
    // with 1 and -1 addition when calculating rows/columns (because our actual length of
    // range our number is in is +1 bigger than k*2, which is excludive range between two
    // right squares)
    // So we find out in which part our number is. We have two parts of number
    // orders: x and y. We just calculate in which one our num is

    // By subsrtracting the highest number in square which our num is in, we find out
    // if it's closer to the highest number in square. If it is, we understand that
    // our target num is in row order, it means that our k is a row representation,
    // then we can easily find the column position 
    if (k*k-n < k) cout << k << " " << k*k-n+1 << "\n";

    // If it's not, it means that our target number is in column order. Then we use our
    // length to remove the rows ordered nums from square accounting and add our num (i.e,
    // if we have 27, we have k=6 and we substract it from k^2: 12-36+27=-24+27=3). Because of
    // range length nuance we substract 1 from here and get the right row position
    else cout << k*2 - k*k + n - 1 << " " << k << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) foo();

    return 0;
}