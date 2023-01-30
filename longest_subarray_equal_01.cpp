#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int a[n];
    cout << "Populate the array : ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    int sum=0,maxi=-1,begin;
    for(int i=0;i<n-1;i++)
    {
        sum= (a[i]==0) ? -1 : 1 ;
        for(int j=i+1;j<n;j++)
        {
            (a[j]==0) ? sum+= -1 : sum+= 1;
            
            if(sum==0 && maxi<j-i+1)
            {
                maxi=j-i+1;
                begin=i;
            }
        }
    }
    
    cout << "\nFor the longest subarray with equal number of 0s and 1s\n";
    cout << "Starting index : " << begin << endl;
    cout << "Ending index : " << begin + maxi - 1 << endl; 
    return 0;
}
