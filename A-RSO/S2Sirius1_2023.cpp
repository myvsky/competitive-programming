// https://uts.sirius.online/#/contest/3166
/*
Bus stops

! Input data format
The program receives two integers K and N as input, written in separate lines. 1≤K≤2×10^9, 1≤N≤2×10^9

! Output data format
The program should output a single integer — the distance to the nearest stop.

! Evaluation system 
A solution that works correctly only for cases when the numbers K and N do not exceed 10000 will be evaluated at 60 points.

! Sample
Input       Output
600         200
2000

! Explanation for example
Stops are located at a distance of 0, 600, 1200, 1800, etc. meters. Sveta has walked 2000 meters, she needs to walk 200 meters
to get to the nearest stop.
*/

#include <iostream>

using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    // Find the differencial between N and K distances
    int dist_to_prev_stop = N % K;
    int dist_to_next_stop = K - dist_to_prev_stop;
    
    // The distance to the next stop can not be bigger than differencial between N and K distances, so find
    // the shortest distance
    if (dist_to_prev_stop < dist_to_next_stop) {
        cout << dist_to_prev_stop;
    } else {
        cout << dist_to_next_stop;
    }
    
    return 0;
}