const int CONST_SIZE =5;
struct video {
	char title[100];
	char category[5];
	int quantity;
};
class list {
public:
	list();
	void add(const video &name);
	//int remove(char title[]);
	void display_all();
	

private:
	video my_list[CONST_SIZE];
	//int num_of_videos;
	int index;
};
