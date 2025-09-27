#include <iostream>
#include "Pure_Virtual_Function.h"
#include "Friend_Function.h"
#include <cstdlib> // for screen Clearing command systems
using namespace std;
int main() {
	int choice;
	do {
		cout << "\n-------------------------------------------------------------------------------\n";
		cout << "                 =====   Lab 07 Run Time Polymorphism    =====                  \n";
		cout << "--------------------------------------------------------------------------------\n";
		cout << "1. Area & Draw as Pure Virtual functions (Abstract Class)\n";
		cout << "2. Total Area of Rectangule & Circle using Friend Function\n";
		cout << "3. Exit\n";
		cout << "Enter your choice (1-3): ";
		cin >> choice;
		cout << "\n-------------------------------------------------------------\n";
		switch (choice) {
			//****************************************************|  TASK 01 |*********************************************************
			case 1: {
				cout << "--- Circle ---\n";
				Circle c;
				c.draw();
				c.area();

				cout << "\n--- Rectangle ---\n";
				Rectangle r;
				r.draw();
				r.area();

				// Shape s; ? Not allowed: Shape is an abstract class
				break;
			}

			//****************************************************|  TASK 02 |*********************************************************
			case 2: {
				Circle1 c;
				Rectangle1 r;

				cout << "=== Circle Input ===\n";
				c.getInput();

				cout << "\n=== Rectangle Input ===\n";
				r.getInput();

				double total = totalArea(c, r);
				cout << "\nTotal Combined Area using friend function: " << total << endl;

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
