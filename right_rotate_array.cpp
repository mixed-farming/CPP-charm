#include <iostream>

using namespace std;

void array_rotate(int a[],int n,int k)
{
    k = k % n;//bcuz after every n rotations we get the initial array
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            cout << a[n+i-k] << " ";
        }
        else
        {
            cout << a[i-k] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n,k;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter number of array rotations : ";
    cin >> k;
    int a[n],i;
    cout << "Populate the array : ";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    array_rotate(a,n,k);
    return 0;
}
