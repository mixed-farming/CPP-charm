#include <iostream>
#include <algorithm>
using namespace std;


// minimum operations to make array elements of A equal = N - max(frequency(A[i])
//where N is the number of elements present in the array
int main() {
	int t;//number of test cases
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int i,a[n];
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }

	    sort(a,a+n);

	    int maxi=1,count=1;
	    for(i=1;i<n;i++)
	    {
	        if(a[i]==a[i-1])
	        {
	            count++;
	            if(count>maxi)
	            {
	                maxi=count;
	            }
	        }
	        else
	        {
	            count=1;
	        }
	    }

	    cout << n-maxi << endl;
	}
	return 0;
}
