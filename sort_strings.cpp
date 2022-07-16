#include <iostream>
#include <algorithm>
using namespace std;

void f()
{
    int n,i;
    cin >> n;//size of the string

    char a[n],b[n];

    for(i=0;i<n;i++)
    cin >> a[i];

    for(i=0;i<n;i++)
    cin >> b[i];

    sort (a,a+n);//ascending sort
    sort (b,b+n,greater<char>());//descending sort

    for(i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    for(i=0;i<n;i++)
    {
        cout << b[i] << " ";
    }

    cout << endl << endl;
}

int main() {
	int t;//testcases
	cin >> t;
	while(t--)
	{
	    f();
	}
	return 0;
}
