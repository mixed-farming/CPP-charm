//Given an integer n,output the smallest integer m such that m>n and DigitSumParity(m)!=DigitSumParity(n)
//DigitSum(1023)=1+0+2+3=6.
//DigitSum(N) and DigitSum(m) have different parity, i.e. one of them is odd and the other is even.

#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    m=n;
    int count=0;
    while(n%10==9)
    {
        count++;
        n/=10;
    }

    if(count%2==0)
    cout << m+1 << endl;
    else
    cout << m+2 << endl;
	return 0;
}

/*

LOGIC:
- In most of the cases, adding 1 to the number gives the solution, except if it ends with '9'
- For odd no. of Ending nines, we add 2
- Eg. 9+2=11, 909+2=911 etc
- For even no. of Ending nines, we add 1
- Eg. 99+1=100, 21+1=22, 9199+1=9200 etc

*/


