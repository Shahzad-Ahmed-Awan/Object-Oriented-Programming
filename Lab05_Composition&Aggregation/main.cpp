#include <iostream>
#include "Aggregation.h"
#include "Composition.h"
#include <cstdlib> // for screen Clearing command systems
#include<windows.h>
using namespace std;
int main() {
	int choice;
	while(true) {
		// Displaying menu options
		cout << "========================================================================"<<endl;
		cout << "   ------  Welcome to OOP Composition & Aggregation Stimulation  ------"<<endl;
		cout << "========================================================================\n"<<endl;
		cout << "Kindly choose a option Below"<<endl;
		cout << "1. Calculator using Composition "<<endl;;
		cout << "2. Aggregation Student Stimulation"<<endl;
		cout << "3. Exit"<<endl;
		cout << "------------------------------------------------------------------------"<<endl;
		cout << "Enter your choice (1-3): ";
		cin >> choice;
		cout << "=========================================================================\n"<<endl;

		switch(choice) {
			case 1: { //********************| Task-01- Single Inheritance|***********************
				Calculator2 calc;
				int choice;
				double num1, num2;

				do {
					cout << "\n-------------------------------------------------------------\n";
					cout << "                 ===== CALCULATOR MENU =====                  \n";
					cout << "-------------------------------------------------------------\n";
					cout << "1. Add\n";
					cout << "2. Subtract\n";
					cout << "3. Multiply\n";
					cout << "4. Divide\n";
					cout << "5. Show Last Result\n";
					cout << "6. Exit\n";
					cout << "Enter your choice (1-6): ";
					cin >> choice;
					cout << "\n-------------------------------------------------------------\n";
					switch (choice) {
						case 1:
							cout << "Enter two numbers: ";
							cin >> num1 >> num2;
							calc.add(num1, num2);
							break;

						case 2:
							cout << "Enter two numbers: ";
							cin >> num1 >> num2;
							calc.subtract(num1, num2);
							break;

						case 3:
							cout << "Enter two numbers: ";
							cin >> num1 >> num2;
							calc.multiply(num1, num2);
							break;

						case 4:
							cout << "Enter two numbers: ";
							cin >> num1 >> num2;
							calc.divide(num1, num2);
							break;

						case 5:
							cout << "Last stored result is: "<< calc.getLastResult() << endl;
							break;

						case 6:
							cout << "Exiting Calculator. Thank you!"<< endl;
							break;

						default:
							cout << "Invalid choice. Please select from 1 to 6." << endl;
					}
					cout << "\n-------------------------------------------------------------\n";
					if (choice != 6) {
						system("pause");
						system("cls");
					}


				} while (choice != 6);
				break;
			}
			//**********************************************| Task-02: Aggregation|**************************************************
			case 2: {
				// Step 1: Create calculator dynamically (heap)
				Calculator* calc = new Calculator(10, 5);
				cout << endl;

				// Step 2: Create first student inside a scope
				{
					Student s1(calc);
					s1.showResult();
				} // Student s1 is destroyed here
				cout << "\n------------------------------------------------------------------------------------------\n" << endl;
				cout << "\nStudent 1 is destroyed. Calculator will  still exists.See student 2 will use & show result\n" << endl;
				cout << "\n------------------------------------------------------------------------------------------\n" << endl;
				// Step 3: Create second student inside a scope
				{
					Student s2(calc);
					s2.showResult();
				} // Student s2 is destroyed here
				cout << "\n------------------------------------------------------------------------------------------\n" << endl;
				cout << "\nStudent 2 is destroyed. Calculator still exists.\n" << endl;
				cout << "\n------------------------------------------------------------------------------------------\n" << endl;

				// Step 4: Manually delete the calculator
				cout << "Now deleting the calculator manually from main.\n" << endl;
				cout << "\n------------------------------------------------------------------------------------------\n" << endl;
				delete calc;

				break;
			}
			case 3: { //********************| Exit |***********************
				return 0;
				break;
			}

			default:
				cout<<"Invalid Choice Please Re-entered your choice (after 15s) "<<endl;
				break;

		}

		cout<<"\n\nScreen will Clear after 10s "<<endl;
		Sleep(10000);  // To auto clearup Screen
		system("cls");


	}

	return 0;
}