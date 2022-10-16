/*

Given an integer N,let us consider a triangle of numbers of N lines in which a number a11
appears in the first line, two numbers a21 and a22 appear in the second line, and so on.
In general, in the i-th line of the triangle, there are i numbers present
ai1,ai2, ... aii for all 1<=i<=N.

Develop a program that will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that
on each path the next number is located on the row below, more precisely either directly below or below and one place to the right.


Sample input :
2
3
1
2 1
1 2 3
4
1
1 2
4 1 2
2 3 1 1

sample output :
5
9

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<=i;j++)
	        {
	            cin >> a[i][j];
	        }
	    }

	    for(int i=n-2;i>=0;i--)
	    {
	        for(int j=0;j<=i;j++)
	        {
	            if((a[i][j]+a[i+1][j])>(a[i][j]+a[i+1][j+1]))
	            {
	                a[i][j]+=a[i+1][j];
	            }
	            else
	            {
	                a[i][j]+=a[i+1][j+1];
	            }
	        }
	    }

	    cout << a[0][0] << endl;
	}
	return 0;
}


