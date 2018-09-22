#include "std_lib_facilities.h"

int main()
{
	cout << "Enter your name (followed by 'enter'): ";
	string name;
	cin >> name;
	cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
	string first_name;
	cin >> first_name;

	string friend_name;
	cout << "Enter your friend's name (followed by 'enter'): ";
	cin >> friend_name;
	char friend_sex = '0';
	cout << "Enter m if your friend male or enter f if your friend female: ";
	cin >> friend_sex;
	cout << "Enter your friend's age (followed by 'enter'): ";
	int age;
	cin >> age;
	cout << endl;

	cout << "Dear " << first_name << ",\n\n";
	cout << "How are you? I am fine. I miss you.\n";
	
	cout << "Have you seen " << friend_name <<" lately?\n";
	
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	else if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age <= 0 || age >= 110)
	{
		simple_error("you're kidding!");
	}
	if (age < 12)
	{
		cout << "Next year you will be " << age+1 << ".\n";
	}
	else if (age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	else if (age > 70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}
	cout << "\nYours sincerely,";
	cout << endl << endl;
	cout << name << "\n";




}
