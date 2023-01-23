#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char str[] = "Password";
	memset(str,'*', sizeof(str));// Parameters : starting location, character introduced, number of bytes to be copied
	cout << str;// output : *********
	return 0;
}

/*
Memset() is a C++ function. It copies a single character for a specified number of times to an object. 
It is useful for filling a number of bytes with a given value starting from a specific memory location.
*/
