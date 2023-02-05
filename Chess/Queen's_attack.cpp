/*
Given an n*n chess board and the co-ordinate of the queen piece, 
the program outputs the number of cells on the square chess board that are under the queen's attack.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cout << "Enter the dimension of the chess board : ";
    cin >> n;
    cout << "Enter the co-ordinate of the queen on the chess board : ";
    cin >> x >> y;
    
    cout << "No.of cells under attack = " << (2*(n-1)) + ((n-max(x,y))+(min(x,y)-1)) + (min(x-1,n-y)+min(n-x,y-1)) ;
    return 0;
}

//ans = horizontal cells + vertical cells + co-ordinate((+,+) + (-,-)) + co-ordinate((+,-) + (-,+)) 
