#include "std_lib_facilities.h"

int main()
{
	try
	{
		int szam = 0;
		//1
		cout << ++szam << ". feladat\t";
		cout << "Success!\n";
		//2
		cout << ++szam << ". feladat\t";
		cout << "Success!\n";
		//3
		cout << ++szam << ". feladat\t";
		cout << "Success" << "!\n";
		//4
		cout << ++szam << ". feladat\t";
		cout << "Success"<< "!\n";
		//5
		cout << ++szam << ". feladat\t";
		int res = 7;
		vector<int> v(10);
		v[5] = res;
		cout << "Success!\n";
		//6
		cout << ++szam << ". feladat\t";
		vector<int> v1(10);
		v1[5] = 7;
		if (v1[5]==7)
			cout << "Success!\n";
		//7
		cout << ++szam << ". feladat\t";
		if (true)
			cout << "Success!\n";
		else
			cout << "Fail!\n";
		//8
		cout << ++szam << ". feladat\t";
		bool c = false;
		if (!c)
			cout << "Success!\n";
		else
			cout << "Fail!\n";
		//9
		cout << ++szam << ". feladat\t";
		string s = "ape";
		bool c1 = "fool"<s;
		if (!c1)
			cout << "Success!\n";
		//10
		cout << ++szam << ". feladat\t";
		string s1 = "ape";
		if (s1!="fool")
			cout << "Success!\n";
		//11
		cout << ++szam << ". feladat\t";
		string s2 = "ape";
		if (s2!="fool")
			cout << "Success!\n";
		//12
		cout << ++szam << ". feladat\t";
		string s3 = "ape";
		if (s3<"fool")
			cout << "Success!\n";
		//13
		cout << ++szam << ". feladat\t";
		vector<char> v2(5);
		for (int i=0; i<v2.size(); ++i);
		cout << "Success!\n";
		//14
		cout << ++szam << ". feladat\t";
		vector<char> v3(5);
		for (int i=0; i<v3.size(); ++i);
		cout << "Success!\n";
		//15
		cout << ++szam << ". feladat\t";
		string s4 = "Success!\n";
		for (int i=0; i<s4.length(); ++i)
			cout << s4[i];
		//16
		cout << ++szam << ". feladat\t";
		if (true)
			cout << "Success!\n";
		else
			cout << "Fail!\n";
		//17
		cout << ++szam << ". feladat\t";
		int x = 2000;
		char c2 = x;
		if (c2!=2000)
			cout << "Success!\n";
		//18
		cout << ++szam << ". feladat\t";
		string s5 = "Success!\n";
		for (int i=0; i<s5.length(); ++i)
			cout << s5[i];
		//19
		cout << ++szam << ". feladat\t";
		vector<int> v4(5);
		for (int i=0; i<v4.size(); ++i);
		cout << "Success!\n";
		//20
		cout << ++szam << ". feladat\t";
		int i=0;
		int j = 9;
		while (i<10)
			++i;
		if (j<i)
			cout << "Success!\n";
		//21
		cout << ++szam << ". feladat\t";
		int x2 = 2;
		double d = 5/double (x2);
		if (d==x2+0.5)
			cout << "Success!\n";
		//22
		cout << ++szam << ". feladat\t";
		string s6 = "Success!\n";
		for (int i=0; i<=10; ++i)
			cout << s6[i];
		//23
		cout << ++szam << ". feladat\t";
		int i2=0;
		int j2=9;
		while (i2<10)
			++i2;
		if (j2<i2)
			cout << "Success!\n";
		//24
		cout << ++szam << ". feladat\t";
		int x3 = 4;
		double d2 = 5/double (x3-2);
		if (d2==2+0.5)
			cout << "Success!\n";
		//25
		cout << ++szam << ". feladat\t";
		cout << "Success!\n";
		keep_window_open();
	return 0;
	}
	catch (exception& e)
	{
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}