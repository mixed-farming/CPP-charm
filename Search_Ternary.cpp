#include <iostream>

using namespace std;

int search_ternary(int a[],int l, int r, int k)
{
    if(r>=l)
    {
        int mid1=l+(r-l)/3;
        int mid2=r-(r-l)/3;
        
        if(a[mid1]==k)
        {
            return mid1+1;
        }
        if(a[mid2]==k)
        {
            return mid2+1;
        }
        
        if (k<a[mid1])
        return search_ternary(a,l,mid1-1,k);
        else if(k>a[mid2])
        return search_ternary(a,mid2+1,r,k);
        else
        return search_ternary(a,mid1+1,mid2-1,k);
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
    int result=search_ternary(a,0,n-1,k);
    (result==-1)?cout << "Element not found.\n" :cout << "Element present at position " << result << ".\n";
    return 0;
}

/*
NOTE :
Ternary Search does more comparisons than Binary Search in worst case.
*/
