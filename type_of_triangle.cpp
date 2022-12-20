//Ouputs the type of triangle based on its sides
#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout << "Enter the sides of the triangle : ";
    cin >> a >> b >> c;
    
    if((a+b)<=c || (b+c)<=a || (c+a)<=b)
    cout << "Triangle doesn't exist.\n";
    else
    {
        cout << "\nBased on sides the triangle is : ";
        if(!(a!=b || b!=c || c!=a))
        cout << "Equilateral.\n";
        else if(a==b || b==c || c==a)
        cout << "Isosceles.\n";
        else 
        cout << "Scalene.\n";
        
        a*=a;
        b*=b;
        c*=c;
        cout << "Based on angle the triangle is : ";
        if(a+b==c || b+c==a || c+a==b)
        cout << "Right angled.\n";
        else if(a+b<c || b+c<a || c+a<b)
        cout << "Obtuse angled.\n";
        else
        cout << "Acute angled.\n";
    }
    
    return 0;
}
