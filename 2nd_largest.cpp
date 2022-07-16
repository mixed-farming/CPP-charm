#include <iostream>

using namespace std;

int main() {
	int t,i;
	cin >> t;//testcases
	int x[t],y[t],z[t];
	for(i=0;i<t;i++)
	{
	    cin >> x[i];
	    cin >> y[i];
	    cin >> z[i];
	}

	for(i=0;i<t;i++)
	{
	    if((x[i]>y[i] && x[i]<z[i])||(x[i]>z[i] && x[i]<y[i]))
	    cout << x[i] << "\n";
	    if ((y[i]>x[i] && y[i]<z[i])||(y[i]>z[i] && y[i]<x[i]))
	    cout << y[i] << "\n";
	    if ((z[i]>x[i] && z[i]<y[i])||(z[i]>y[i] && z[i]<x[i]))
	    cout << z[i] << "\n";
	}
	return 0;
}
