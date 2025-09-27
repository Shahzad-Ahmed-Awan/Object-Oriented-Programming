#include <iostream>
using namespace std;

// Abstract base class
class Shape {
protected:
    double Area;

public:
    virtual void draw() = 0;  // Pure virtual function
    virtual void area() = 0;  // Pure virtual function
};

// Derived class: Circle
class Circle : public Shape {
    double radius;

public:
    Circle() {
        cout << "\nEnter the radius of the Circle: ";
        cin >> radius;
    }

    void draw() override {
        cout << "Drawing a circle...\n";
    }

    void area() override {
        Area = 3.14 * radius * radius;
        cout << "Radius of Circle: " << radius << endl;
        cout << "Area of Circle: " << Area << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double length, width;

public:
    Rectangle() {
        cout << "\nEnter the length of the Rectangle: ";
        cin >> length;
        cout << "Enter the width of the Rectangle: ";
        cin >> width;
    }

    void draw() override {
        cout << "Drawing a rectangle...\n";
    }

    void area() override {
        Area = length * width;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area of Rectangle: " << Area << endl;
    }
};