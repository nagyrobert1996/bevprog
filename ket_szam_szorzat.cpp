#include "std_lib_facilities.h"

int main()
{
	int a;
	int b;
	cout << "Az elso szam: ";
	cin >> a;
	cout << "A masodik szam: ";
	cin >> b;
	if(a == 0 || b == 0)
	{
		cout <<"Ha barmelyik szam 0 akkor a csere nem vegezheto el.\n";
	}
	else if (a >= b)
	{
		a = a * b;
		b = a / b;
		a = a / b;
		cout << "A csere utan az elso szam: " << a << "\n";
		cout << "A csere utan a masodik szam: " << b << "\n";
	}
	else
	{
		b = b * a;
		a = b / a;
		b = b / a;
		cout << "A csere utan az elso szam: " << a << "\n";
		cout << "A csere utan a masodik szam: " << b << "\n";
	}
}
