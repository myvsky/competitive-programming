// https://uts.sirius.online/#/contest/3166
/*
Table

   1  2  3  4  5
  |- |- |- |- |- |
1 |1 |2 |9 |10|25|
2 |4 |3 |8 |11|24|
3 |5 |6 |7 |12|23|
4 |16|15|14|13|22|
5 |17|18|19|20|21|

! Input
Single int 1 <= n <= 10^18

! Output
2 integers representing row (y) and column (x) of n position

! Example
INPUT   OUTPUT
15      4 2
*/
#include <iostream>
typedef long long ll;

using namespace std;

int main() {
    ll n;
    int row, col;
    cin >> n;

    // Prepare binary search for finding square root of n
    int l = 0;              // Left partition
    int r = 1e9+1;   // Right partition
    int m;                  // Middle partition

    // Binary tree search
    while (r != l+1) {
        m = (l+r) / 2;
        (ll)m*m < n? l = m: r = m;
    }

    // Left partition is always less or equal to n, so we use it. Don't forget to avoid the data types collision (ll and int)
    if (n - (ll)l*l <= l+1) {
        col = l+1;
        row = n - (ll)l*l;
    }
    else {
        col = (ll)((l+1)*(l+1)) - n+1;
        row = l+1;
    }
    if (l % 2 == 0) cout << col << " " << row;
    else cout << row << " " << col;
    return 0;
}

