#include <iostream>
using namespace std;

class Calculator {
public:
    // ------- ADD -------
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }

    double add(double a, double b, double c) {
        return a + b + c;
    }

    // ------- SUBTRACT -------
    int subtract(int a, int b) {
        return a - b;
    }

    int subtract(int a, int b, int c) {
        return a - b - c;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double subtract(double a, double b, double c) {
        return a - b - c;
    }

    // ------- MULTIPLY -------
    int multiply(int a, int b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double multiply(double a, double b, double c) {
        return a * b * c;
    }

    // ------- DIVIDE -------
    double divide(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return (double)a / b;
    }

    double divide(int a, int b, int c) {
        if (b == 0 || c == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return (double)a / b / c;
    }

    double divide(double a, double b) {
        if (b == 0.0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }

    double divide(double a, double b, double c) {
        if (b == 0.0 || c == 0.0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b / c;
    }
};
