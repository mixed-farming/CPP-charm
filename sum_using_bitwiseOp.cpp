#include <iostream>

using namespace std;

/*

Logic: Half adder

A     B     Carry   Sum
0     0     0       0  
0     1     0       1
1     0     0       1
1     1     1       0

Implication: 
Carry = A & B
Sum = A ^ B

Algo:
1) Get two positive numbers a and b as input
2) Then checks if the number b is not equal to 0
   - Finds the carry value (a & b)
   - Finds the sum value (a ^ b) and stores it in the variable a
   - Then shifts the carry to the left by 1-bit stores it in b
3) again goes back to step 2
4) When b becomes 0 it finally returns the sum

*/

int bitwiseadd(int x, int y)
{
    while (y != 0)//until there is no carry on the next bit
    {
        int carry = x & y;//the carry gets added again with the sum value
        x = x ^ y; 
        y = carry << 1;//carry value is to be added to the next bit
    }
    return x;
}
 
int main()
{
    int num1, num2;
    cout << "Enter two numbers to perform addition using bitwise operators: " ;
    cin >> num1 >> num2;
    cout << "\nSum is " << bitwiseadd(num1, num2);
    return 0;
}

