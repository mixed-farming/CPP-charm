#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string a;
	    cin >> a;
	    if(n%2==1)
	    {
	        for(int i=0;i<n-1;i=i+2)
	        {
	            char temp=a[i];
	            a[i]=a[i+1];
	            a[i+1]=temp;
	        }
	    }
	    else
	    {
	        for(int i=0;i<n;i=i+2)
	        {
	            char temp=a[i];
	            a[i]=a[i+1];
	            a[i+1]=temp;
	        }
	    }

	    char c='m';
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<=c)
	        {
	            a[i]=a[i]+(c-a[i]+1)*2-1;
	        }
	        else
	        {
	            a[i]-=(a[i]-(c+1)+1)*2-1;
	        }
	    }

	    cout << a << endl;
	}
	return 0;
}
