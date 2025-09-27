#include <iostream>
#define PI 3.1416
using namespace std;

class Rectangle1; // Forward declaration

class Circle1 {
private:
    int radius;

public:
    // Input function for user input
    void getInput() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    // Make friend function
    friend double totalArea(const Circle1 c, const Rectangle1 r);  //renamed to circle1 to avoid the redefination error in main
};

class Rectangle1 {
private:
    int length;
    int width;

public:
    // Input function for user input
    void getInput() {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }

    // Make friend function
    friend double totalArea(const Circle1 c, const Rectangle1 r);
};

// Friend function definition
double totalArea(const Circle1 c, const Rectangle1 r) {
    double circleArea = PI * c.radius * c.radius;
    double rectangleArea = r.length * r.width;
    return circleArea + rectangleArea;
}

