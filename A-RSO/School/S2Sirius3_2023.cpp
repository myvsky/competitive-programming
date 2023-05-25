// https://uts.sirius.online/#/contest/3166

/*
Peaceful rooks

! Input data format
The first line of input data contains an integer 𝑁, 1≤𝑁≤105 the size of the board. The following 𝑁 lines contain one number from 
1 before 𝑁, namely, in 𝑖‑th line contains the number 𝑎𝑖 - the number of the vertical in which the rook stands on 𝑖‑th horizontal. 
In this problem, the horizontals are numbered with numbers from 1 up to 𝑁 from top to bottom, the verticals are numbered with 
numbers from 1 up to 𝑁 from left to right (see picture).

! Output data format
The program should output 𝑁 numbers — the arrangement of rooks after the turn in the same format.

! Remark
The example in the condition corresponds to the figures. Initially, the rooks stood in columns 4, 2, 3, 5, 1 when listing them in
rows from top to bottom. After the turn, the rooks stand in columns 1, 4, 3, 5, 2

! Examples
Input   Output
5       1
4       4
2       3
3       5
5       2       
1       
*/

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n, a;
    // Initialize vector of size n
    cin >> n;
    vector<int> vect(n);

    // Input value is some pattern of its output index value (4 value -> 4 index with pattern)
    // Because after rotation we just invert columns and rows, we use following
    for (int i = 1; i <= n; i++)
    {
        // Positions of rooks entrance
        cin >> a;

        // Calculate how far rook moved from initial position (n-i) and +1 (because colmun numeration
        // is set from 1 to N.
        vect[a] = n+1-i;
    }
    for (int i = 1; i <= n; i++) cout << vect[i];
    return 0;
}