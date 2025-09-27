#include <iostream>
using namespace std;

// Calculator class (independent)
class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator(double a, double b) {
        num1 = a;
        num2 = b;
        cout << "Calculator created with values: " << num1 << " and " << num2 << endl;
    }

    void multiply() {
        double result = num1 * num2;
        cout << "Multiplication result: " << result << endl;
    }

    ~Calculator() {
        cout << "Calculator is being destroyed." << endl;
    }
};

// Student class (Aggregation: holds pointer to existing calculator)
class Student {
private:
    Calculator* calc;

public:
    Student(Calculator* c) {
        calc = c;
        cout << "Student created and received reference to calculator." << endl;
    }

    void showResult() {
        cout << "Student is using the calculator..." << endl;
        calc->multiply();
    }

    ~Student() {
        cout << "Student is being destroyed." << endl;
    }
};

