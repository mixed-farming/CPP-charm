#include <iostream>

using namespace std;

int search_binary(int a[],int l, int r, int k)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==k)
        return mid+1;
        if(a[mid]<k)
        return search_binary(a,mid+1,r,k);
        if(a[mid]>k)
        return search_binary(a,l,mid-1,k);
    }
    
    return -1;
}

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int a[n];
    cout << "Populate the array in ascending order : ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter key element : ";
    cin >> k;
    int result=search_binary(a,0,n-1,k);
    (result==-1)?cout << "Element not found.\n" :cout << "Element present at position " << result << ".\n";
    return 0;
}
