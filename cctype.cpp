#include <iostream>
#include <cctype>
using namespace std;
// cctype library contains functions that work with character data
int main()
{
	char letter;
	bool lower, upper, alpha, digit, blank ;
	cout << "Enter a letter: ";
	cin >> letter;
	cin.get();
	/*lower = islower(letter);
	upper = isupper(letter);
	alpha = isalpha(letter);
	digit = isdigit(letter);
	*/
	//blank = isblank(letter);
	
	if (islower(letter))
	{
		cout << "you entered a lowercase "<< letter << endl;
		letter = toupper(letter);
		cout << "I converted it to: " << letter << endl;
	}
	if (isupper(letter))
	{
		cout << "you entered a uppercase "<< letter << endl;
		letter = tolower(letter);
		cout << "I converted it to: " << letter << endl;
	}
	if (isalpha(letter))
		cout << "you entered a alphabetic "<< letter << endl;
	else
		cout << "you did NOT enter a alphabetic "<< letter << endl;
	if (isdigit(letter))
		cout << "you entered a digit "<< letter << endl;
	else
		cout << "you did NOT enter a digit "<< letter << endl;
	/*if (blank)
		cout << "you entered a blank "<< letter << endl;
	else
		cout << "you did NOT enter a blank "<< letter << endl;
*/
	cin.get();


}
