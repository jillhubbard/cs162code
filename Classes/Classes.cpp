#include <iostream>
#include "list.h"
using namespace std;
void main()
{
	list home_videos;	//has an array of 100 videos
	video out_of_site;
	char response;
	do {
		// populate out_of_site structure
		cout << "What the title of your video?";
		cin.get(out_of_site.title, 100, '\n');
		cin.ignore(100, '\n');
		cout << "What the category of your video?";
		cin.get(out_of_site.category, 5, '\n');
		cin.ignore(100, '\n');
		cout << "How many of them do you have?";
		cin >> out_of_site.quantity;
		cin.ignore();
		home_videos.add(out_of_site);	//use add operation to add it to the list
		cout << "Done?  (y/n)";
		cin.get(response);
		cin.ignore();
	} while (response =='n');
	
	home_videos.display_all();	//use display_all operation to display entire list


	cin.get();
}