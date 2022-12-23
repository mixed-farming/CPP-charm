#include <bits/stdc++.h>
using namespace std;

string AddString(string a, string b)
{
    if(a.size()>b.size())
    return AddString(b,a);//recursive call to make 2nd string as longer string.
    
    int length=b.size();
    
    int pad=b.size()-a.size();
    string padder;
    for(int i=0;i<pad;i++)
    {
        padder.push_back('0');
    }
    
    a=padder+a;
    
    char carry='0';
    string result;
    for(int i=length-1;i>=0;i--)
    {
        if(a[i]=='1' && b[i]=='1')
        {
            if(carry=='1')
            result.push_back('1'), carry='1';
            else
            result.push_back('0'), carry='1';
        }
        else if(a[i]=='0' && b[i]=='0')
        {
            if(carry=='1')
            result.push_back('1'), carry='0';
            else
            result.push_back('0'), carry='0';
        }
        else
        {
            if(carry=='1')
            result.push_back('0'), carry='1';
            else
            result.push_back('1'), carry='0';
        }
        
    }
    
    if(carry=='1')
    result.push_back(carry);
    
    reverse(result.begin(),result.end());

    return(result);
}

int main()
{
    string a,b;
    cout << "Enter the binary strings : \n";
    cin >> a >> b;
    cout << "Sum of strings : " << AddString(a,b) << endl;
    return 0;
}
