#include<iostream>
#include "Employee.h"
#include "BankAccount.h"
#include "MyRectangle.h"
#include "Locker.h"
#include<windows.h>
using namespace std;

int main() {
	int choice;
	while(true) {
		// Displaying menu options
		cout << "========================================================================"<<endl;
		cout << "-------- Welcome to OOP Constrcutor, its Type and Destructor ---------"<<endl;
		cout << "========================================================================\n"<<endl;
		cout << "Kindly choose a option Below"<<endl;
		cout << "1. Empl0yee (Self Made Default Constructor)"<<endl;;
		cout << "2. Parameterazied Constructor"<<endl;
		cout << "3. Constrcutor Overloading"<<endl;
		cout << "4. Destrcutor and it"<<endl;
		cout << "5. Exit"<<endl;
		cout << "------------------------------------------------------------------------"<<endl;
		cout << "Enter your choice (1-5): ";
		cin >> choice;
		cout << "========================================================================="<<endl;

		switch(choice) {
			case 1: { //********************| Task-01|***********************
//				using data from Employee.h
				Employee emp;
				emp.displayDetails();
				break;
			}

			case 2: { //********************| Task-02|***********************
				string accNum;
				string accHolder;
				double bal;

				//Validation Account number cant be empty
				cout << "Enter Account Number: ";
				cin.ignore();
				getline(cin,accNum);
				while (accNum.length() == 0) {
					cout << "Error! Account Number cannot be empty. Enter again: ";
					getline(cin,accNum);
				}
				// Validation Name cant be empty
				cout << "Enter Account Holder Name: ";
				cin.ignore();
				getline(cin,accHolder);
				while (accHolder.empty()) {
					cout << "Error! Account Holder Name cannot be empty. Enter again: ";
					getline(cin,accHolder);
				}

				//Validation Balance cant be string
				cout << "Enter Initial Balance: ";
				cin>>bal;
				while (cin.fail() || bal< 0) {
					cin.clear();
					cin.ignore(1000,'\n');
					cout << "Balance cannot be negative or string. Enter again: ";
					cin >> bal;
				}

				BankAccount account(accNum, accHolder, bal);
				account.showAccountDetails();

				break;
			}

			case 3: { //********************| Task-03|***********************

				MyRectangle rect1; // Object using Default constructor
				rect1.display();

				float l, w;
				cout << "\nEnter Length: ";
				cin >> l;
				while(cin.fail() || l<= 0) { //Validation for Length
					cin.clear();
					cin.ignore(1000,'\n');
					cout << "Error! Length  cannot be negative or string. Enter again: ";
					cin >> l;
				}

				cout << "Enter Width: ";
				cin >> w;
				while (cin.fail() || w<= 0) { //Validation for width
					cin.clear();
					cin.ignore(1000,'\n');
					cout << "Error! Width cannot be negative or string. Enter again: ";
					cin >> w;
				}

				MyRectangle rect2(l, w);  //Object using Two-parameter constructor
				rect2.display();

				float side;
				cout << "\nEnter Side for Square: ";
				cin >> side;
				while (cin.fail() || side<= 0) {
					cin.clear();
					cin.ignore(1000,'\n');
					cout << "Error! Side cannot be negative or string. Enter again: ";
					cin >> side;
				}

				MyRectangle rect3(side); // object using Single-parameter constructor (Square)
				rect3.display();

				break;
			}

			case 4: { //********************| Task-04|***********************

				{
					Locker locker1; // Object created in stack in a block
					cout << "Automatic call is coming"<<endl;
				} // Destructor called here automatically

				Locker* ptrLocker = new Locker(); // Object created on heap
				cout << "Manual call is coming"<<endl;
				delete ptrLocker; // Destructor called manually
				break;
			}
			case 5: {
				return 0;
				break;
			}

			default:
				cout<<"Invalid Choice Please Re-entered your choice (after 10s ) "<<endl;
				break;

		}
         
          cout<<"\n\nScreen will clear after 10s"<<endl;
          
		Sleep(10000);
		system("cls");


	}

	return 0;

}
