#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Populate the array : ";
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++)
    {
        switch(a[i])
        {
            case 0:
                x++;
                break;
            
            case 1:
                y++;
                break;
            
            case 2:
                z++;
                break;
        }
    }
    
    y+=x;
    
    cout << "\nSorted array : " ;
    for(int i=0;i<n;i++)
    {
        if(i<x)
        a[i]=0;
        else if(i<y)
        a[i]=1;
        else
        a[i]=2;
        
        cout << a[i] << " ";
    }
    
    return 0;
}
