#ifndef HIERARCHICALINHERITANCE_H
#define HIERARCHICALINHERITANCE_H

#include <iostream>
using namespace std;

class Employee2 {
	private:
		string name;
		float salary;

	public:
		Employee2(string n, float s) {
			setName(n);
			setSalary(s);
		}

		void setName(string n) {
			while (n.empty()) {
				cin.ignore();
				cout << "Name cannot be empty. Enter again: ";
				getline(cin, n);
			}
			name = n;
		}

		void setSalary(float s) {
			while (s <= 0 || cin.fail()) {
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid salary. Enter a positive amount: ";
				cin >> s;
			}
			salary = s;
			cin.ignore(); // clear newline
		}

		void display_employee() const {
			cout << "Name  : " << name << endl;
			cout << "Salary: " << salary << endl;
		}
};

class Developer : public Employee2 {
	private:
		string programming_language;

	public:
		Developer(string n, float s, string lang) : Employee2(n, s) {
			setProgrammingLanguage(lang);
		}

		void setProgrammingLanguage(string lang) {
			while (lang.empty()) {
				cin.ignore();
				cout << "Programming language cannot be empty. Enter again: ";
				getline(cin, lang);
			}
			programming_language = lang;
		}

		void display_developer() const {
			display_employee();
			cout << "Programming Language: " << programming_language << endl;
		}
};

class Designer : public Employee2 {
	private:
		string design_tool;

	public:
		Designer(string n, float s, string tool) : Employee2(n, s) {
			setDesignTool(tool);
		}

		void setDesignTool(string tool) {
			while (tool.empty()) {
				cin.ignore();
				cout << "Design tool cannot be empty. Enter again: ";
				getline(cin, tool);
			}
			design_tool = tool;
		}

		void display_designer() const {
			display_employee();
			cout << "Design Tool: " << design_tool << endl;
		}
};

#endif
