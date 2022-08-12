#include <bits/stdc++.h>
using namespace std;
#define bool int

/* Function to check if x is power of 2*/
bool isPowerOfTwo (int x)
{
	/* First x in the below expression is for the case when x is 0 */
	return x && (!(x&(x-1)));
}

/*Driver code*/
int main()
{
	isPowerOfTwo(31)? cout<<"Yes\n": cout<<"No\n";
	isPowerOfTwo(64)? cout<<"Yes\n": cout<<"No\n";
	return 0;
}

/*If we subtract a power of 2 numbers by 1 then all unset bits after the only set bit become set; and the set bit becomes unset.
For example for 4 ( 100) and 16(10000), we get the following after subtracting 1 
3 –> 011 
15 –> 01111

So, if a number n is a power of 2 then bitwise & of n and n-1 will be zero. We can say n is a power of 2 or not based on the value of n&(n-1). 
The expression n&(n-1) will not work when n is 0. To handle this case also, our expression will become n& (!n&(n-1))

time complexity : O(1)
space complexity : O(1)

other approach with same complexities : if( (ceil(log2(n)) == floor(log2(n))) )

*/
