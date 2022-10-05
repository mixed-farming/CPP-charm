# include<bits/stdc++.h>

using namespace std;

// Function to get parity of number n.
// It returns 1 if n has odd parity, and returns 0 if n has even parity

int counts=0;

bool getParity(unsigned int n)
{
	bool parity = 0;
	while (n)
	{
		parity = !parity;//invert the parity bit
		n	 = n & (n - 1);//unset the rightmost bit
		counts++;//count of number of 1s
	}
	return parity;
}

int main()
{
	unsigned int n;
	cout << "Enter a number : ";
	cin >> n;
	cout<<"Parity of no "<<n<<" = "<<(getParity(n)? "odd": "even");
	cout<<"\nNumber of ONEs present = "<<counts<<endl;

	getchar();
	return 0;
}

/*

Algorithm: getParity(n)
1. Initialize parity = 0
2. Loop while n != 0
      a. Invert parity
             parity = !parity
      b. Unset rightmost set bit
             n = n & (n-1)
3. return parity

Example:
 Initialize: n = 13 (1101)   parity = 0

n = 13 & 12  = 12 (1100)   parity = 1
n = 12 & 11 = 8  (1000)   parity = 0
n = 8 & 7 = 0  (0000)    parity = 1

*/
