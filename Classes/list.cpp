#include "list.h"
#include <iostream>

list::list() {
	//num_of_videos = 0;
	index = 0;
}

void list::add(const video &name) {
	//my_list[index] = name;
	//cout << "I'm here!";
	/*my_list[index].title = "rocky";
	my_list[index].category = "fun";
	my_list[index].quantity = 2;*/
	my_list[index] = name;
	index = index + 1;
}
void list::display_all() {
	for (int i = 0; i<index; ++i)
		std::cout << my_list[i].title << '\t'
		<< my_list[i].category
		<< '\t' << my_list[i].quantity << '\n';
}
