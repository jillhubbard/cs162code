#include <iostream>
#include <algorithm>
#include <exception>
#include <stdexcept>
#include <iomanip>

using namespace std;
/* ***************************************************
Class Definition
****************************************************** */
class MinHeap
{
private:
    int* data;      //array containing the heap
    int capacity;   //maximum size
    int heapSize;   //current logical size

    ///--------------Heap helper functions--------------
    int getLeftChildIndex(int index);      //get index of left child
    int getRightChildIndex(int index);     //get index of right child
    int getParentIndex(int index);         //get index of parent

public:
    void clear();
    int getTop();
    int removeTop();
    void add(int value);


    MinHeap();                          //capacity of 100
    MinHeap(int maxItems);
    virtual ~MinHeap();
    MinHeap(const MinHeap& other);
    MinHeap& operator=(const MinHeap& other);

    friend std::ostream& operator<<(std::ostream& os, const MinHeap& theHeap);

};

/* ***************************************************
Class Implementation
Complete the add function.
Complete the removeTop function.
****************************************************** */
MinHeap::MinHeap()
{
    heapSize = 0;
    capacity = 100;
    data = new int[100];
}

MinHeap::MinHeap(int maxSize)
{
    heapSize = 0;
    capacity = maxSize;
    data = new int[maxSize];
}

MinHeap::~MinHeap()
{
    delete [] data;
}

MinHeap::MinHeap(const MinHeap& other)
{
    heapSize = other.heapSize;
    capacity = other.capacity;
    data = new int[100];
    std::copy(other.data, other.data+heapSize, data);
}

MinHeap& MinHeap::operator=(const MinHeap& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    heapSize = rhs.heapSize;
    capacity = rhs.capacity;
    data = new int[100];
    std::copy(rhs.data, rhs.data+heapSize, data);
    return *this;
}


ostream& operator<<(ostream& os, const MinHeap& theHeap) {
    os << left;
    for(int i = 0; i < theHeap.heapSize - 1; ++i) {
        os << "[" << i << "]:" << setw(4) << theHeap.data[i];
    }

    os << "[" << theHeap.heapSize - 1 << "]:" << setw(3) << theHeap.data[theHeap.heapSize - 1];
    return os;
}


int MinHeap::getLeftChildIndex(int index) {
    return index * 2 + 1;
}
int MinHeap::getRightChildIndex(int index) {
    return index * 2 + 2;
}
int MinHeap::getParentIndex(int index) {
    if(index == 0)
        throw logic_error("Can't get parent of 0");
    return (index-1) / 2;
}

void MinHeap::clear() {
    heapSize = 0;
}

int MinHeap::getTop() {
    if(heapSize == 0)
        throw logic_error("getTop in empty heap");
    return data[0];
}

int MinHeap::removeTop() {
    if(heapSize == 0)
        throw logic_error("removeTop in empty heap");
    //swap first and last elements
    std::swap(data[0], data[heapSize-1]);
    heapSize--;   //logically remove the old first element

    //merge the new root element back down into heap
    int curIndex = 0;
    //drift down - know we can stop once we reach a leaf (last half of the array)
    while(curIndex < heapSize / 2) {
        int leftIndex = getLeftChildIndex(curIndex);
        int rightIndex = getRightChildIndex(curIndex);
        ///TODO - Find index of smaller child
        ///         Make sure to check if right child exists (index is less than heap size)
        ///         If no right child, left child is smaller be default

        ///TODO - if current value greater than or equal to smallest child, break
        ///         otherwise, swap the two and update curIndex to new location
    }

    //return the old first element
    return data[heapSize];
}

void MinHeap::add(int value) {
    if(heapSize == capacity)
        throw logic_error("add in full heap");

    //add new value to next spot in heap
    data[heapSize] = value;
    int curIndex = heapSize;     //location of item just added

    ///TODO - swap our way up until current location is root

    heapSize++;  //increment size
}
/* ***************************************************
Class Implementation
****************************************************** */
int main()
{
    MinHeap m;

    cout << "---------------Building Heap---------------" << endl;
    for(int i = 50; i > 0; i-=5) {
        m.add(i);
        cout << m << endl;
    }

//    cout << "---------------Removing top five items---------------" << endl;
//    for(int i = 0; i < 5; i++) {
//        cout << "Removed " << m.removeTop() << endl;
//        cout << m << endl;
//    }


    return 0;
}
