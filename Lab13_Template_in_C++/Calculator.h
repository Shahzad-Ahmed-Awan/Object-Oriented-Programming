#include <iostream>
#include <stdexcept>  // For standard exceptions
#include <string>
#include <iomanip>    // For output formatting
using namespace std;

// Template Class: T = Operand type, O = Operator type
template <typename T, typename O>
class Calculator {
private:
    T num1, num2;
    O op;

public:
    Calculator(T a, T b, O oper) : num1(a), num2(b), op(oper) {}

    T compute() {
        if (op == "+" || op == "add")
            return num1 + num2;
        else if (op == "-" || op == "sub")
            return num1 - num2;
        else if (op == "*" || op == "mul")
            return num1 * num2;
        else if (op == "/" || op == "div") {
            if (num2 == 0)
                throw runtime_error("Division by zero is undefined.");
            return num1 / num2;
        } else {
            throw invalid_argument("Unsupported operator. Use +, -, *, / or add, sub, mul, div.");
        }
    }
};

// Template Function to Display Result
template <typename T>                 //making result generics
void display(const T& result) {
    cout << fixed << setprecision(2);
    cout << "Result: " << result << endl;
}
