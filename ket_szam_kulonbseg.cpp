#include "std_lib_facilities.h"

int main()
{
	int a = 5;
	int b = 7;
	cout << "Az elso szam: " << a << "\n";
	cout << "A masodik szam: " << b << "\n";
	b = b + a;
	a = b - a;
	b = b - a;
	cout << "A csere utan az elso szam: " << a << "\n";
	cout << "A csere utan a masodik szam: " << b << "\n";
}
