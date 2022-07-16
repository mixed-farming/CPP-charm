#include <iostream>
using namespace std;

int main() {
	int n,i,j;
	cin >> n;
	int k=1;
	for(i=0;i<n;i++)
	{
	    if(i%2==0)
	    {
	        for(j=0;j<5;j++)
	        {
	            cout << k << " ";
	            k++;
	        }
	    }
	    else
	    {
	        k=k+4;
	        for(j=0;j<5;j++)
	        {
	            cout << k << " ";
	            k--;
	        }
	        k=k+6;
	    }
	    cout << endl;
	}
	return 0;
}
