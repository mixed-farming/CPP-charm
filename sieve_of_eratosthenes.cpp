#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter the interval for prime numbers : ";
    cin >> a >> b;
    
    int sieve[b];
    
    for(int i=0;i<=b;i++)
    {
        sieve[i]=1;
    }
    
    sieve[0]=sieve[1]=0;
    
    for(int i=2;i*i<=b;i++)
    {
        if(sieve[i]==1)
        {
            for(int j=i*i;j<=b;j=j+i)
            {
                sieve[j]=0;
            }
        }
    }
    
    for(int i=a;i<=b;i++)
    {
        if(sieve[i]==1)
        {
            cout << i << " ";
        }
    }
    return 0;
}
