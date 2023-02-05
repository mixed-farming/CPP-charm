#include <iostream>
using namespace std;

/*

New chess character — pook. It has the qualities of both a rook and a pawn. Specifically, treating the chessboard to be an N x N chess board
where (i,j) denotes the intersection of the i-th row and the j-th column, a pook placed at square (x,y) threatens the following squares:
(i,y) for every 1≤i≤N
(x,i) for every 1≤i≤N
(x+1,y−1), if x<N and y≥2
(x+1,y+1), if x<N and y<N

Find the maximum number of pooks that can be placed on an empty N×N chessboard such that none of them threaten each other.

*/

int main() {
    int n;
    cin >> n;
    if(n==1)
    cout << 1 << endl;
    else if(n<4)
    cout << n-1 << endl;
    else
    cout << n << endl;
	return 0;
}
