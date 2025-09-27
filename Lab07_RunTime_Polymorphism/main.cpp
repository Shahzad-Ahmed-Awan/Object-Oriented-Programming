#include <iostream>
#include "Employee.h"
#include "Shape.h"
#include <cstdlib> // for screen Clearing command systems
using namespace std;
int main() {
     	int choice;
	do {
		cout << "\n-------------------------------------------------------------------------------\n";
		cout << "                 =====   Lab 07 Run Time Polymorphism    =====                  \n";
		cout << "--------------------------------------------------------------------------------\n";
		cout << "1. Calculate Salaries (Virtual Function & function Overriding)---Runtime\n";
		cout << "2. Compute Shape Areas (Virtual Function & function Overriding)---Runtime\n";
		cout << "3. Exit\n";
		cout << "Enter your choice (1-3): ";
		cin >> choice;
		cout << "\n-------------------------------------------------------------\n";
		switch (choice) {
			//****************************************************|  TASK 01 |*********************************************************
			case 1: {
					cout << "\n--- Salary Calculation ---" << endl;

				Employee* empPtr = nullptr;

				// Input and calculation for Permanent Employee
				double basic, bonus;
				cout << "\nEnter Permanent Employee details:" << endl;
				cout << "Basic Salary: ";
				cin >> basic;
				cout << "Bonus: ";
				cin >> bonus;

				PermanentEmployee pe(basic, bonus);
				empPtr = &pe;
				cout << "Permanent Employee Salary: " << empPtr->calculateSalary() << endl;

				// Input and calculation for Contract Employee
				double rate;
				int hours;
				cout << "\nEnter Contract Employee details:" << endl;
				cout << "Hourly Rate: ";
				cin >> rate;
				cout << "Hours Worked: ";
				cin >> hours;

				ContractEmployee ce(rate, hours);
				empPtr = &ce;
				cout << "Contract Employee Salary: " << empPtr->calculateSalary() << endl;
				break;
			}
			
        	//****************************************************|  TASK 02 |*********************************************************
			case 2: {
				cout << "\n--- Shape Area Calculation ---" << endl;
				Shape* shapePtr;

				// Rectangle
				double length, width;
				cout << "Enter Rectangle length: ";
				cin >> length;
				cout << "Enter Rectangle width: ";
				cin >> width;
				Rectangular rect(length, width);
				shapePtr = &rect;
				cout << "Area of Rectangle: " << shapePtr->area() << endl;

				// Circle
				double radius;
				cout << "Enter Circle radius: ";
				cin >> radius;
				Circle circ(radius);
				shapePtr = &circ;
				cout << "Area of Circle: " << shapePtr->area() << endl;
				
				break;
			}

			case 3:
				cout << "Exiting Program. Thank you!"<< endl;
				break;

			default:
				cout << "Invalid choice. Please select from 1 to 3." << endl;
		}
		cout << "\n-------------------------------------------------------------\n";
		if (choice != 3) {
			system("pause");
			system("cls");
		}


	} while (choice != 3);
	
	return 0;
}