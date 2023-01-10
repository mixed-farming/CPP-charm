#include <iostream>
using namespace std;

int main() {
    int n,k;//n - length of the array, k - subarray length
    cin >> n >> k;
    int a[n],maxi=0;// maxi - maximum contiguous subarray sum of specified subarray length
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(i<k)
        {
            maxi+=a[i];//logic
        }
    }

    int temp=maxi;
    for(int i=k;i<n;i++)
    {
        temp+=(a[i]-a[i-k]);//logic 
        if(temp>maxi)
        {
            maxi=temp;
        }
    }

    cout << maxi << endl;
	return 0;
}
