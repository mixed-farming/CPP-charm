#include <bits/stdc++.h>
using namespace std;

/*

Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. 
The values are stored in a specific sorted order i.e. either ascending or descending.

*/

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(9);
    cout << "Size of set : " << s.size() << endl << "Set : ";
    for(auto i: s)
    cout << i << " ";
    return 0;
}

//output : size=3, set={1,2,9}
