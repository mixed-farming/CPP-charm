#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int size=floor(log10(n)+1);//getting the length of the number
	    string num=to_string(n);//converting number to string
	    int flag=1;
	    for(int i=0;i<size/2;i++)
	    {
	        if(num[i]!=num[size-i-1])
	        {
	            flag=0;
	            break;
	        }
	    }

	    if(flag==1)
	    cout << "YES\n";
	    else
	    cout << "NO\n";
	}
	return 0;
}
