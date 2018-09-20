#include "std_lib_facilities.h"

int main()
{
	int a;
	int b;
	cout << "Az elso szam: ";
	cin >> a;
	cout << "A masodik szam: ";
	cin >> b;
	a ^= b;
	b ^= a;
	a ^= b;
	cout << "A csere utan az elso szam: " << a << "\n";
	cout << "A csere utan a masodik szam: " << b << "\n";
}
