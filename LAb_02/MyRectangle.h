#include<iostream>
using namespace std;

class MyRectangle { //Rectangular Class
	private:
		float length;
		float width;

	public:
		MyRectangle() {  //default Constructor
			length = 1.0f;
			width = 1.0f;
		}

		MyRectangle(float l, float w) { // two parameter constructor
			length = l;
			width = w;
		}

		MyRectangle(float side) {  // Overloading Again for Square shape
			length = side;
			width = side;
		}

		float area() {           //Area Function
			return length * width;
		}

		void display() {
			cout<<"\n***************************************"<<endl;
			cout << "      --- Rectangle Details ---" << endl;
			cout<<"**************************************"<<endl;
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
			cout << "Area: " << area() << endl;
		}
};