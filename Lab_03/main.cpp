#include<iostream>
#include "BankAccount.h"
#include "UpdateBankAccount.h"
#include "Inheritance.h"
#include "ConstructInheritance.h"
#include<windows.h> 
using namespace std;


int main() {
		int choice;
	while(true) {
		// Displaying menu options
		cout << "========================================================================"<<endl;
		cout << "--------Welcome to OOP Copy Constructor & inheritance Assesment---------"<<endl;
		cout << "========================================================================\n"<<endl;
		cout << "Kindly choose a option Below"<<endl;
		cout << "1. Assess Shallow Copy Behavior"<<endl;;
		cout << "2. Assess Deep Copy Behavior"<<endl;
		cout << "3. Assess Inheritance"<<endl;
		cout << "4. Assess Constructors Execution Behavior Inheritance"<<endl;
		cout << "5. Exit"<<endl;
		cout << "------------------------------------------------------------------------"<<endl;
		cout << "Enter your choice (1-5): ";
		cin >> choice;
		cout << "========================================================================="<<endl;

		switch(choice) {
			case 1: { //********************| Task-01|***********************
				cout << "----- Demonstrating Shallow Copy and Double Delete Problem -----\n" << endl;
				{

					BankAccount acc1(1000); // Original object
					// Shallow copy constructor is called
					BankAccount acc2 = acc1;

					cout << "\nModifying acc2's balance...\n" << endl;

					*acc2.balance = 500;
					cout << "Balance of acc1: " << *acc1.balance << endl;
					cout << "Balance of acc2: " << *acc2.balance << endl;
					// acc1 and acc2 both will go out of scope here
					// Destructor will be called twice for same memory => Double delete problem
					
				} //self scope 
				cout << "Above scope ends. Destructors executed. Double delete occurred.\n" << endl;
				break;
			}
			
			case 2: { //********************| Task-02|***********************
				cout << "----- Demonstrating Deep Copy (No Double Delete Problem) -----" << endl;
				{
					UpdateBankAccount acc1(2000); // Original object
					UpdateBankAccount acc2 = acc1; // Deep copy constructor is called
					cout << "Modifying acc2's balance..." << endl;
					*acc2.balance = 1500;
					cout << "Balance of acc1: " << *acc1.balance << endl;
					cout << "Balance of acc2: " << *acc2.balance << endl;
					// acc1 and acc2 will both go out of scope here
					// No shared pointer => No double delete problem
					
				}//self scope
				
				cout << "Above scope ends. Destructors executed safely (no double delete)." << endl;
				break;
			}

			case 3: { //********************| Task-03|***********************

				cout<<"\n --------------Single Inheritance---------"<<endl;
				Student s1;
				s1.setStudent("Shahzad", 21, 1024);
				s1.showStudent();
				cout<<"Roll & Age inherited"<<endl;
				break;
			}

			case 4: { //********************| Task-04|***********************

				cout<<"\n----Contructors execution Behavoir in inheritance-----"<<endl;
			    MyRectangle r1;
				break;
			}
			case 5:{
			  return 0;
				break;
			}

			default:
				cout<<"Invalid Choice Please Re-entered your choice (after 10s) "<<endl;
				break;

		}
		
		cout<<"\n\nScreen will Clear after 10s "<<endl;
      Sleep(10000);
      system("cls");


	}

	return 0;
}