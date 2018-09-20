#include "iostream"


int main()
{
	int a = 1;
	int db = 0;
	while(a != 0)
	{
		++db;
		a = a << 1;
	}
	std::cout << "Eredmeny: " << db << "\n";
}
