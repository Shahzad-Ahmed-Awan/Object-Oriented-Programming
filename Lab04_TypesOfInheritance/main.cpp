#include <iostream>
#include<windows.h>
#include "Singleinheritance.h"
#include "MultilevelInheritance.h"
#include "Hierarchical_Inheritance.h"
#include "MultipleInheritance.h"
using namespace std;

int main() {
	int choice;
	while(true) {
		// Displaying menu options
		cout << "========================================================================"<<endl;
		cout << "   -----------   Welcome to OOP Types of Inheritance Lab     ---------"<<endl;
		cout << "========================================================================\n"<<endl;
		cout << "Kindly choose a option Below"<<endl;
		cout << "1. Single Inheritance"<<endl;;
		cout << "2. MultiLevel Inheritance"<<endl;
		cout << "3. Hierarchical Inheritance"<<endl;
		cout << "4. Multi Level Inheritance"<<endl;
		cout << "5. Exit"<<endl;
		cout << "------------------------------------------------------------------------"<<endl;
		cout << "Enter your choice (1-5): ";
		cin >> choice;
		cout << "=========================================================================\n"<<endl;

		switch(choice) {
			case 1: { //********************| Task-01- Single Inheritance|***********************
				string name;
				int age, id;


				cout << "Enter Student ID: ";
				cin >> id;
				cin.ignore();
				cout << "Enter Student Name: ";
				getline(cin,name);

				cin.ignore();

				cout << "Enter Age: ";
				cin >> age;
				cin.ignore();


				Student s(id, name, age);

				s.display_student_info();

				break;
			}
			//**********************************************| Task-02|**************************************************
			case 2: {
				cout << "\n  ----- Demonstrating MultiLevel Inheritance -----\n" << endl;

				string name, dept;
				int age, emp_id;

				cin.ignore();
				cout << "Enter Manager Name: ";
				getline(cin, name);

				cout << "Enter Age: ";
				cin >> age;

				cout << "Enter Employee ID: ";
				cin >> emp_id;

				cin.ignore(); // Clear newline
				cout << "Enter Department: ";
				getline(cin, dept);

				Manager m(emp_id, name, age, dept);

				m.display_manager();

				break;
			}
			//***********************************************| Task-03|*****************************************************
			case 3: {

				string name, lang, tool;
				float salary;

				// Developer Input
				cin.ignore();
				cout << "Enter Developer Name: ";
				getline(cin, name);

				cin.ignore();
				cout << "Enter Salary: ";
				cin >> salary;
				cin.ignore();

				cout << "Enter Programming Language: ";
				getline(cin, lang);

				Developer dev(name, salary, lang);

				// Designer Input
				cout << "\nEnter Designer Name: ";
				getline(cin, name);

				cout << "Enter Salary: ";
				cin >> salary;
				cin.ignore();

				cout << "Enter Design Tool: ";
				getline(cin, tool);

				Designer des(name, salary, tool);

				// Output
				cout<<"\n\n======================================"<<endl;
				cout << "\n   -------- Developer Info -------\n";
				cout<<"======================================\n"<<endl;
				dev.display_developer();

				cout<<"\n\n======================================"<<endl;
				cout << "\n   ------- Designer Info -------\n";
				cout<<"======================================\n"<<endl;
				des.display_designer();

				break;
			}

			case 4: { //********************| Task-04|***********************

				Photocopier p;
				cout<<"======================================"<<endl;
				cout << "  ------ Photocopier Machine ------\n";
				cout<<"======================================\n"<<endl;

				cout<<"\n-----  Called in child method   ----"<<endl;
				p.photocopy();
				cout<<"\n\n------  Called with child object  -----"<<endl;
				p.scan_document();
				p.print_document();
				
				break;

			}
			case 5: { //********************| Exit |***********************
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