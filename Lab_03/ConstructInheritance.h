#include <iostream>
using namespace std;
//Parent ClassS 
class Shape {
	public:
		Shape() {
			cout<<"Shape constructor (parent) called"<<endl;
		}
};
//Child Class
class MyRectangle : public Shape {
	public:
		MyRectangle() {
			cout<<"MyRectangle constructor (Child)called"<<endl;
		}
};
