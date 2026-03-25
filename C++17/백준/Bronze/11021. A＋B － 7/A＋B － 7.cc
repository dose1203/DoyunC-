#include <iostream>
using namespace std;

int main()
{
	int a,p,q;
	
	cin >> a;

	for (int b = 1; b <= a; b++)
	{
		cin >> p;
		cin >> q;
		cout << "Case #" << b << ": " << p+q<<'\n';
	}
}