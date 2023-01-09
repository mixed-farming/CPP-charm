#include <iostream>

using namespace std;

bool IsPalindrome(string s,int i)
{
    if(i>s.size()/2)
    {
        return true;
    }
    
    return s[i]==s[s.size()-i-1] && IsPalindrome(s,i+1);
}

int main()
{
    string s;
    cin >> s;
    if(IsPalindrome(s,0))
    cout << "Yes\n";
    else
    cout << "No" << endl;
    return 0;
}
