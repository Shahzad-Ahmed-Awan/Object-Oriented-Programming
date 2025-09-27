// Shape.h
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
	public:
		virtual double area() {
			cout << "Base Shape area called." << endl;
			return 0;
		}
		virtual ~Shape() {}
};

class Rectangular : public Shape {                                  // named it Rectangular not rectangle because window.h issues with Rectangle
	private:
		double length, width;

	public:
		Rectangular(double length, double width) {
			this->length = length;
			this->width = width;
		}

		double area() override {
			return length * width;
		}
};

class Circle : public Shape {
	private:
		double radius;

	public:
		Circle(double radius) {
			this->radius = radius;
		}

		double area() override {
			return 3.1416 * radius * radius;
		}
};

#endif
