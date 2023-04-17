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
    int l = 0;          // Left partition
    int r = 1e9+1;      // Right partition
    int m;              // Middle partition

    // Binary tree search
    while (r != l+1) {
        m = (l+r) / 2;
        (ll)m*m < n? l = m: r = m;
        // In the end, we always get two numbers: r = l+1 and l = r-1 —– value boundaries of num
    }

    // Num is in left partition
    if (n - (ll)l*l <= (ll)(r)) {
        col = r;
        row = n - (ll)l*l;
    }
    // Num is in right partition
    else {
        col = (ll)(r*r) - n+1;
        row = r;
    }
    // Straight order for divisible by two cols
    if (l % 2 == 0) cout << col << " " << row;
    // Reverse order for not divisible by two cols
    else cout << row << " " << col;
    return 0;
}

