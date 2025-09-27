//*******************************************************************************************************************
//                              #C++ provided Standard Exception Handling (Division by Zero)
//*******************************************************************************************************************
#include<iostream>
#include<stdexcept> // Required for std::runtime_error
using namespace std;

double safe_divide(int numerator, int denominator) {
 
    if (denominator == 0) {
        // Throw a built-in std::runtime_error exception with a descriptive message
        throw runtime_error("Cannot divide by zero. Denominator is zero.");
    }
    // If not zero, perform the division normally.
    return (double)numerator / denominator;
}

int main(){
    int num1, num2;
    double result;

    cout << "--- Divide By Zero Exception Handling ---" << endl;
    
    cout << "Enter the numerator (integer): ";
    if (!(cin >> num1)) {
        cout << "Invalid input. Exiting." << endl;
        return 1;
    }
    
    cout << "Enter the denominator (integer): ";
    if (!(cin >> num2)) {
        cout << "Invalid input. Exiting." << endl;
        return 1;
    }

    // The 'try' block encloses the code that might throw an exception.
    try {
        result = safe_divide(num1, num2); //error can occur here 
        cout << "\nResult of division: " << result << endl;
    }
    // Catch the specific built-in exception: std::runtime_error
    catch (const runtime_error& e) {
        // Handle the error by printing the message stored in the exception object.
        cout << "\nError: An exception occurred!" << endl;
        cout << "Exception Type: Runtime Error" << endl;
        cout << "Details: " << e.what() << endl; // e.what() returns the string message
    }
    
    cout << "\nProgram finished safely." << endl;

    return 0;
}
