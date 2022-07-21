/*Lapindrome is defined as a string which when split in the middle, 
gives two halves having the same characters and same frequency of each character. 
If there are odd number of characters in the string, we ignore the middle character and check for lapindrome.*/

#include <iostream>
#include <algorithm>
using namespace std;

void f()
{
    string s;
    cin >> s;
    string first,second;
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
        first+=s[i];
        second+=s[n-i-1];
    }
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());

    if(first==second)
    cout << "YES\n";
    else
    cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    f();
	}
	return 0;
}
