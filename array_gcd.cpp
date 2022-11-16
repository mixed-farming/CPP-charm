#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findgcd(int a,int b)
{
    while(b)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    cout << "Enter the number of numbers : ";
    int n;
    cin >> n;
    int a[n],i;
    cout << "Enter the numbers : ";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int gcd=a[0];
    for(i=1;i<n;i++)
    {
        gcd=findgcd(gcd,a[i]);
    }

    cout << "GCD of array of numbers = " << gcd << endl;
    return 0;
}
