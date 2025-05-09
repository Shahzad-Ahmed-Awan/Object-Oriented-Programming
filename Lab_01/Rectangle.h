#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle {
		int length;  //private data members
		int width;

	public:
        //Method Prototyping
		void setDimensions();

		int area();

		int perimeter();
};
   //Methods Outside Class
void Rectangle :: setDimensions() {
	cout << "Enter length in meters : ";
	cin >> length;
	cout << "Enter width in meters: ";
	cin >> width;
}

int Rectangle :: area() {
	return length * width;
}
int Rectangle :: perimeter() {
	return 2 * (length + width);
}
