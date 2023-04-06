// https://uts.sirius.online/#/contest/3166
/*
Cake Sets

! Input data format 
The program receives two integers A and B as input, written in separate lines. 1≤A≤109, 1≤B≤109

! Output data format
If it is possible to put all the cakes into boxes according to the condition of the problem, the program should output two 
integers. The first number is equal to the number of boxes containing two croissants and one eclair. The second number is 
equal to the number of boxes containing one croissant and two eclairs. If it is impossible to put all the cakes into boxes 
in the right way, the program should output one number -1

! Evaluation system
A solution that works correctly only for cases when the numbers A and B do not exceed 100, will be rated at 60 points.

! Remark
In the first example, you need to take one box with two croissants and one eclair and two boxes with one croissant and two eclairs. 
There will be 4 in total croissant and 5 eclairs.


Input   Output
4       1 2
5
---
5       -1
3
*/
#include <iostream>

using namespace std;

int main() 
{
    int A, B;
    cin >> A >> B;

    // When A+B is not divisible by 3, it means that we can't set cakes by 3 in all the boxes
    if ((A+B)%3!=0) cout << "-1";
    else
    {
        int n = (A+B)/3;
        if (A >= n and B >= n) cout << A - n << " " << B - n;
        else cout << -1;
    }
    return 0;
}