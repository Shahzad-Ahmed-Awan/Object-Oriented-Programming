//*******************************************************************************************************************
//                            Lab 06  -----  Compile Time Polymorphism  Stimulation 
//*******************************************************************************************************************
#include <iostream>
#include "Calculator.h"
#include "Distance.h"
#include <cstdlib> // for screen Clearing console
using namespace std;
int main() {
     	int choice;
	do {
		cout << "\n-------------------------------------------------------------------------------\n";
		cout << "                 =====   Lab 06 Compile Time Polymorphism    =====                  \n";
		cout << "--------------------------------------------------------------------------------\n";
		cout << "1. Calculator (using Function Overloading)\n";
		cout << "2. Distance comparator (using Operator Overloading)\n";
		cout << "3. Exit\n";
		cout << "Enter your choice (1-3): ";
		cin >> choice;
		cout << "\n-------------------------------------------------------------\n";
		switch (choice) {
			//****************************************************|  TASK 01 |*********************************************************
			case 1: {
				Calculator calc;
				int operation, operands;

				do {
					cout << "\n--- Calculator Menu ---\n";
					cout << "1. Add\n";
					cout << "2. Subtract\n";
					cout << "3. Multiply\n";
					cout << "4. Divide\n";
					cout << "5. Exit\n";
					cout << "Choose operation (1-5): ";
					cin >> operation;

					if (operation == 5) break;

					cout << "How many operands? (2 or 3): ";
					cin >> operands;

					cout << "Enter values (int or float supported): ";

					if (operands == 2) {
						double a, b;
						cin >> a >> b;

						switch (operation) {
							case 1:
								cout << "Result: " << calc.add(a, b) << endl;
								break;
							case 2:
								cout << "Result: " << calc.subtract(a, b) << endl;
								break;
							case 3:
								cout << "Result: " << calc.multiply(a, b) << endl;
								break;
							case 4:
								cout << "Result: " << calc.divide(a, b) << endl;
								break;
						}

					} else if (operands == 3) {
						double a, b, c;
						cin >> a >> b >> c;

						switch (operation) {
							case 1:
								cout << "Result: " << calc.add(a, b, c) << endl;
								break;
							case 2:
								cout << "Result: " << calc.subtract(a, b, c) << endl;
								break;
							case 3:
								cout << "Result: " << calc.multiply(a, b, c) << endl;
								break;
							case 4:
								cout << "Result: " << calc.divide(a, b, c) << endl;
								break;
						}

					} else {
						cout << "Invalid operand count.\n";
					}

				} while (operation != 5);

				cout << "Calculator exited.\n";
				break;
			}
			
        	//****************************************************|  TASK 02 |*********************************************************
			case 2: {
				cout << "\n--- Distance Comparison ---" << endl;
				Distance d1, d2;

				cout << "Enter details for Distance 1:" << endl;
				d1.inputDistance();

				cout << "Enter details for Distance 2:" << endl;
				d2.inputDistance();

				if (d1 == d2) {
					cout << "Both distances are equal." << endl;
				} else {
					cout << "Distances are not equal." << endl;
				}

				break;
			}

			case 3:
				cout << "Exiting Calculator. Thank you!"<< endl;
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