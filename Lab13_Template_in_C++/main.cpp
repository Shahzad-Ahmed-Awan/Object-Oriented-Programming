//*******************************************************************************************************************
//                   Lab13 Generic Calculator & Error Logging Class using Templates in c++
//*******************************************************************************************************************
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "Calculator.h"
#include "Logger_Class.h"
#include <cstdlib> // for screen Clearing command systems
using namespace std;
int main() {
	int choice;
	do {
		cout << "\n-------------------------------------------------------------------------------\n";
		cout << "                 =====   Lab 13 Template Programs Stimulation    =====                  \n";
		cout << "--------------------------------------------------------------------------------\n";
		cout << "1. Calculator with Template \n";
		cout << "2. Logger Class using Tempate\n";
		cout << "3. Exit\n";
		cout << "Enter your choice (1-3): ";
		cin >> choice;
		cout << "\n-------------------------------------------------------------\n";
		switch (choice) {
			//****************************************************|  TASK 01 Generic Ccalculator|*********************************************************
			case 1: {
				try {
					double a, b;
					string oper;

					cout << "===== Template Calculator =====" << endl;
					cout << "Enter first number: ";
					cin >> a;

					cout << "Enter second number: ";
					cin >> b;

					cout << "Enter operator (+, -, *, / or add, sub, mul, div): ";
					cin >> oper;

					// Instantiating class template with <double, string>
					Calculator<double, string> calc(a, b, oper);
					double result = calc.compute();

					// Display result using function template
					display(result);
				} catch (const invalid_argument& e) {
					cout << "Invalid Input: " << e.what() << endl;
				} catch (const runtime_error& e) {
					cout << "Runtime Error: " << e.what() << endl;
				} catch (...) {
					cout << "Unknown Error occurred!" << endl;
				}
				break;
			}

			//****************************************************|  TASK 02 logger Class |*********************************************************
			case 2: {
				Logger<int> intLog;
				Logger<string> strLog;

				int choice;

				while (true) {
					cout << "\n1. Log integer error\n2. Log string error\n3. Exit\n4. View previous errors\nChoose: ";
					cin >> choice;

					if (choice == 1) {
						cout << "Enter integer error: ";
						cin >> intLog.error;
						intLog.log();
					} else if (choice == 2) {
						cout << "Enter string error: ";
						cin.ignore(); // flush newline
						getline(cin, strLog.error);
						strLog.log();
					} else if (choice == 3) {
						break;
					} else if (choice == 4) {
						viewLogs();
					} else {
						cout << "Invalid option. Try again.\n";
					}

					if (choice != 3) { 
						system("pause");//for keep console clean
						system("cls");
					}
				}


				break;
			}

			case 3:
				cout << "Exiting Lab 13 Thank you!"<< endl;
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