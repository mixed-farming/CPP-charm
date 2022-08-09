#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n!=0)
	{
	    int a[n],i;
	    for(i=1;i<=n;i++)
	    {
	        cin >> a[i];
	    }

	    int b[n];
	    for(i=1;i<=n;i++)
	    {
	        b[a[i]]=i;
	    }

	    int flag=1;
	    for(i=1;i<=n;i++)
	    {
	        if(a[i]!=b[i])
	        {
	            flag=0;
	            break;
	        }
	    }

	    if(flag==1)
	    {
	        cout << "ambiguous" << endl;
	    }
	    else
	    {
	        cout << "not ambiguous" << endl;
	    }

	    cin >> n;
	}
	return 0;
}

/*With n = 5, a permutation might look like 2, 3, 4, 5, 1.
However, there is another possibility of representing a permutation: You create a list of numbers where the i-th number is the position of the integer i in the permutation. Let us call this second possibility an inverse permutation. The inverse permutation for the sequence above is 5, 1, 2, 3, 4.
An ambiguous permutation is a permutation which cannot be distinguished from its inverse permutation. The permutation 1, 4, 3, 2 for example is ambiguous, because its inverse permutation is the same.*/
