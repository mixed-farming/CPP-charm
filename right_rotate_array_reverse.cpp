// C++ program to rotate right an array by K times
#include <iostream>
using namespace std;
int main()
{
	int arr[] = {2, 4, 6, 8, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2; //No. of rotations
	k = k % n;
	int i, j;
	// Reverse last k numbers
	for (i = n - k, j = n - 1; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	// Reverse the first n-k terms
	for (i = 0, j = n - k - 1; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	// Reverse the entire array
	for (i = 0, j = n - 1; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	// Print the rotated array
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
