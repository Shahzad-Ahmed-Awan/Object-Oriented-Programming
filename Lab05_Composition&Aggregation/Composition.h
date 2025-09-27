#include <iostream>
using namespace std;

// Display class: Responsible for showing and storing last result
class Display {
    double LastResult = 0;

public:
    void ShowResult(double result) {
        LastResult = result;
        cout << "\n    Result is " << result << endl;
    }

    double getLastResult() const {
        return LastResult;
    }
};

// Calculator2 class: Performs arithmetic and uses Display to show/store result
class Calculator2 {
private:
    Display display; // COMPOSITION: Calculator owns Display

public:
    void add(double a, double b) {
        double result = a + b;
        display.ShowResult(result); // showing result using display
    }

    void subtract(double a, double b) {
        double result = a - b;
        display.ShowResult(result);
    }

    void multiply(double a, double b) {
        double result = a * b;
        display.ShowResult(result);
    }

    void divide(double a, double b) {
        if (b == 0) {
        	cout << "---------------------------------"<<endl;
            cout << "Error: Cannot divide by zero." << endl;
            return;
        }
        double result = a / b;
        display.ShowResult(result);
    }

    double getLastResult() {
        return display.getLastResult();
    }
};

