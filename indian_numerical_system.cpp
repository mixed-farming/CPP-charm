#include <bits/stdc++.h>
using namespace std;

/*

input: 123456789
output: 12,34,56,789

*/

int main()
{
    string s,temp,result;
    cout << "Enter a number : ";
    cin >> s;
    temp=s;
    reverse(temp.begin(),temp.end());
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(i>0 && i%2==0 && (i+1)<s.size())
        {
          result+=temp[i];
          result+=',';
        }
        else
        {
            result+=temp[i];
        }
    }

    reverse(result.begin(),result.end());
    cout << result << endl;
    return 0;
}
