#include <iostream>

using namespace std;

//Generic root is the sum of digits of a number until a single digit is obtained.
//Generic root of 789 = 7 + 8 + 9 = 24 = 2 + 4 = 6

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int genroot=n;
    while(1)
    {
        genroot=0;
        while(n)
        {
            genroot+=(n%10);
            n/=10;
        }
        
        if(genroot>9)
        n=genroot;
        else
        break;
    }
    
    cout << "Generic root = " << genroot;
    return 0;
}
