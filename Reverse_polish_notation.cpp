//Reverse Polish notation, also known as reverse Łukasiewicz notation, Polish postfix notation 
//or simply postfix notation

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*

Input
3
(1+(2*3))
((a+b)*(z+x))
((a+t)*((b+(a+c))^(c+d)))

Output
123*+
ab+zx+*
at+bac++cd+^*

*/

int main() {
	int t;
	cin >> t;
	stack <char> s;
	while(t--)
	{
	    string a;
	    cin >> a;
	    for(int i=0;i<a.size();i++)
	    {
	        if(isalpha(a[i])!=0||isdigit(a[i])!=0)
	        {
	            cout << a[i];
	        }
	        else if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^')
	        {
	            s.push(a[i]);
	        }
	        else if(a[i]=='(')
	        {
	            continue;
	        }
	        else if(a[i]==')')
	        {
	            cout << s.top();
	            s.pop();
	        }
	    }
	    cout << endl;
	}
	return 0;
}
