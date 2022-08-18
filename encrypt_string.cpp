/*
   
   It should be encoded in two steps as follows:

1) Swap the first and second character of the string SS, then swap the 3rd and 4th character, then the 5th and 6th character and so on. 
   If the length of SS is odd, the last character should not be swapped with any other.
2) Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z', 
   each occurrence of 'b' by 'y', each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message obtained after the first step by 'a'.
   
 */

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
