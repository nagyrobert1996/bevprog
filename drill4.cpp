#include "std_lib_facilities.h"

int main()
{
	vector<double> szamok;
	double szam;
	string meegy;
	bool L =true;
	while(L)
	{
		cout << "Irjon be egy szamot: ";
		cin >> szam;
		cout << "Irjon be egy mertekegyseget (cm, m, in, ft): ";
		cin >> meegy;

			while(meegy!="cm" && meegy!="m" && meegy!="in" && meegy!="ft")
			{
				cout << "A megadott mertekegyseg tipus nem megfelelo.\n";				
				cout << "Irjon be egy mertekegyseget (cm, m, in, ft): ";
				cin >> meegy;
			}
		
		if(meegy=="m")
		{
			szamok.push_back(szam);
		}
		else if(meegy=="cm")
		{
			szamok.push_back(szam/100);
		}
		else if(meegy=="in")
		{
			szamok.push_back((szam*2.54)/100);
		}
		else if(meegy=="ft")
		{
			szamok.push_back((szam*12*2.54)/100);
		}
		string kilep;
		cout << "Akar beirni masik szamot (y/n)? ";
		cin >> kilep;
		if (kilep=="n")
		{
			L=false;
		}
		else if (kilep=="y")
		{
			L=true;	
		}
	}
	double ossz;
	for(int i=0; i<szamok.size(); ++i)
	{
		ossz=ossz+szamok[i];
	}
	sort(szamok);
	cout << "A legkisebb szam: " << szamok[0] << "\n" << "A legnagyobb szam: " << szamok.back() << "\n";
	cout << "A szamok osszege: " << ossz <<"\n";
}