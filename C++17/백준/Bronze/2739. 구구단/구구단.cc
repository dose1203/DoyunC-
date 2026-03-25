#include <iostream>
using namespace std;


int main() 
{
    int x,y,z;

    cin >> x;

    for(y=1;y<=9;y++)
    {
        z=x*y;
        cout << x << " * " << y << " = " << z << '\n';
    }
    
}