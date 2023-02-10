#include <iostream>

using namespace std;

/*

Chef is given a number in form of its binary representation S, having length N.
Determine if the number can be represented as a sum of exactly three non-negative powers of 2.

Ex:

1
1-NO
4
1001-YES
5
11001-YES
7
1101101-NO

*/

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        count++;
    }
    
    if(count<=3 && s!="1" && s!="10")//number can't have more than 3 ones (as it is expressed as sum of 3 powers of two)
    cout << "YES\n";// also number can't be either 1 or 2
    else
    cout << "NO\n";
    return 0;
}
