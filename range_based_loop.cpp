#include <iostream>

using namespace std;

int main()
{
    int a[5]={1,2,3,4,5};
    for(auto i: a)
    {
        cout << i << " ";
    }
    return 0;
}

//output : 1 2 3 4 5
