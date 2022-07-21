#include <iostream>
using namespace std;

int main() {
	long long int n,i;
	cin >> n;
	long long int a[n];

	for(i=0;i<n;i++)
	cin >> a[i];

	long long int product=5,count=0;
	for(i=0;i<n;i++)
	{
	    while(product<=a[i])
	    {
	        count=count+(a[i]/product);
	        product*=5;
	    }
	    cout << count << endl;
	    count=0;
	    product=5;
	}
	return 0;
}
