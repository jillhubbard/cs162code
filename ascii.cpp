#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	char value;
	bool exit = false;
	cout << "Enter a value:  ";
	cin >> value; cin.get();
	value = int(value);

	if ((value >= 97 ) && (value <= 122 ))
		cout  << "You entered a lowercase letter";
	else if ((value >= 65 ) && (value <= 90 ))
		cout  << "You entered a uppercase letter";
	while (!exit)
		if ((value >= 65 ) && (value <= 70 )&& (value != 69))
		{
			cout << "letter is A thru F but not E!\n";
			cout << "Enter a value:  ";
			cin >> value; cin.get();
			value = int(value);
		}
		else
			exit = 1;

	cout << char(7); Sleep(2000); cout << char (7);

	cin.get();




}