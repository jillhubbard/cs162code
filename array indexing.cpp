#include <iostream>
using namespace std;
/* **********************
HEADER 
******************* */
int main()
{
	int index;	//indexes elements of the array
	char name[10];	//array to store users name

	//Ask user to enter their name
	cout <<"What's your name?:  ";
	cin.get(name,10,'\n');
	cin.get();

	//Capitalize every element of the array 
	for (index=0; index<10; index = index+1)
		name[index]=toupper(name[index]);
	
	cout << "I'M SCREAMING YOUR NAME:  " << name <<endl;

	cout <<"Press any key to continue\n";
	cin.get();
}
