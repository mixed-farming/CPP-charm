//Subtraction using addition operator

#include <iostream>

using namespace std;

int Subtract(int a, int b)
{
    int c;
    // ~b is the 1's Complement of b
    // adding 1 to it makes 2's Complement of b
    c = a + (~b+1);
    return c;
}

int main()
{
    int a,b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << a << " - " << b << " = " << Subtract(a,b) << endl;
    return 0;
}
