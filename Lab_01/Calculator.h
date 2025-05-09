#define CALCULATOR_H 
#include <iostream> 
using namespace std; 
 
class Calculator { 
public:
	
    float num1; 
    float num2; 
     //getting number from user
    void getNumbers() { 
        cout << "Enter first number: "; 
        cin >> num1; 
        cout << "Enter second number: "; 
        cin >> num2; 
    } 
    //method protyping
    float add();
    float subtract(); 
    float multiply(); 
    float divide();
};
    //methods outside class
    float Calculator :: add() { return num1 + num2; } 
    float Calculator :: subtract() { return num1 - num2; } 
    float Calculator :: multiply() { return num1 * num2; } 
    float Calculator :: divide() { 
        if (num2 != 0) 
            return num1 / num2; 
        else{
        	cout << "Error: Division by zero!\n"; 
        return 0; 
		}
       
    } 