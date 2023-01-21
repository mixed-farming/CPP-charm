#include <iostream>

using namespace std;

int search(int a[],int n, int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        return i+1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int a[n];
    cout << "Populate the array : ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter key element : ";
    cin >> k;
    int result=search(a,n,k);
    (result==-1)?cout << "Element not found.\n" :cout << "Element present at position " << result << ".\n";
    return 0;
}
