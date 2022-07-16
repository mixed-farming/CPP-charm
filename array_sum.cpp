#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

    int sum=0;
    cout << "array sum = " << accumulate(a,a+n,sum);
    return 0;
}
