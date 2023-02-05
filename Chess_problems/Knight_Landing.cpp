/*

You have an 8×8 chessboard. You placed a knight on the square (X1,Y1). 
Note that, the square at the intersection of the i-th row and j-th column is denoted by (i,j).

You want to determine whether the knight can end up at the square (X2,Y2) in exactly 100 moves or not.

*/

#include <iostream>

using namespace std;

int main()
{
    int w,x,y,z;
    cin >> w >> x >> y >> z;
    if((w+x)%2==(y+z)%2)
    cout << "yes\n";
    else
    cout << "no\n";
    return 0;
}

// If a knight is on a black square, in the next move it will be on the white and vice versa.
// A subtle distinction between black and white squares lies in the sum of their coordinates i.e. if one of them is even other will be odd.
// From the above point, the parity of the sum of coordinates in moves 0,2,4,...,100 will be the same.

// Thus on a n x n chess who can keep maximum ceil((n*n)/2) knights without attacking each other. 
