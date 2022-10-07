#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,sum,product,count=0;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        sum=0;
	        product=1;
	        for(int j=i;j<n;j++)
	        {
	            sum+=a[j];
	            product*=a[j];
	            if(sum==product)
    	        {
    	            count++;   
    	        }
	        }
	    }
	    
	    cout << count <<endl;
	}
	return 0;
}
