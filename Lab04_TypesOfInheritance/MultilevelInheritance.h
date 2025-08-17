#include <iostream>
#include "SingleInheritance.h" // using person Class from SingleInheritance.h
using namespace std;

class Employee : public Person {//getting Person class from header file
	private:
		int employee_id;

	public:
		Employee(int id, string n, int a) : Person(n, a) {
			setEmployeeID(id);
		}

		void setEmployeeID(int id) {
			while (id <= 0 || cin.fail()) {
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid Employee ID (>0). Enter again: ";
				cin >> id;
			}
			employee_id = id;
			cin.ignore(); // clear newline
		}

		void display_employee() const {
			cout << "Employee ID: " << employee_id << endl;
			display_person_info();
		}
};

class Manager : public Employee {
	private:
		string department;

	public:
		Manager(int id, string n, int a, string dept) : Employee(id, n, a) {
			setDepartment(dept);
		}

		void setDepartment(string dept) {
			while (dept.empty()) {
				cin.ignore();
				cout << "Department cannot be empty. Enter again: ";
				getline(cin, dept);
			}
			department = dept;
		}

		void display_manager() const {
			cout<<"======================================="<<endl;
			cout << "\n--- Manager Information ---\n";
			cout<<"=======================================\n"<<endl;
			cout << "Department: " << department << endl;
			display_employee();
		}
};


