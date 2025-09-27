//*******************************************************************************************************************
                         //Lab # 12   C++ Custom error message Exception Handling (Division by Zero)
//*******************************************************************************************************************
#include<iostream>
#include<stdexcept> // Standard library for exceptions
using namespace std;

// Function to perform division
double safe_divide(int numerator, int denominator) {
    // Check if the denominator is zero
    if (denominator == 0) {
        // If zero, throw an exception object. 
        // We throw an integer (1) to signal a divide-by-zero error.
        throw 1; 
    }
    // If not zero, perform the division normally.
    return (double)numerator / denominator;
}

int main(){
    int num1, num2;
    double result;

    cout << "--- Divide By Zero Exception Handling ---" << endl;
    
    cout << "Enter the numerator (integer): ";
    cin >> num1;
    
    cout << "Enter the denominator (integer): ";
    cin >> num2;

    // The 'try' block encloses the code that might throw an exception.
    try {
        result = safe_divide(num1, num2);
        cout << "\nResult of division: " << result << endl;
    }
    // The 'catch' block catches the exception if it is thrown.
    
    catch (int error_code) {// It is configured to catch an integer type (int error_code).
        // Handle the specific error (in this case, error_code will be 1).
        cout << "\nError: An exception occurred!" << endl;
        cout << "Error Code: " << error_code << endl;
        cout << "Cannot divide by zero. Please provide a non-zero denominator." << endl;
    }
    
    cout << "\nProgram finished safely." << endl;

    return 0;
}
