#ifndef SINGLEINHERITANCE_H
#define SINGLEINHERITANCE_H


#include <iostream>
using namespace std;

class Person {

	private:
		string name;
		int age;

	public:
		Person(string n, int a ) {
			setName(n);
			setAge(a);
		}

		void setName(string n) {
			while (n.empty()) {
				cin.ignore();
				cout << "Name cannot be empty. Enter a valid name: ";
				getline(cin, n);
			}
			name = n;
		}

		void setAge(int a) {
			while (a < 1 || a > 120 || cin.fail()) {
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid age (1-120s). Enter again: ";
				cin >> a;
			}
			age = a;
			cin.ignore(); // clear leftover newline
		}

		void display_person_info() const {
			cout << "Name: " << name << endl;
			cout << "Age : " << age << endl;
		}
};

//Derived Class
class Student : public Person {
	private:
		int student_id;

	public:
		Student(int id, string n, int a) : Person(n, a) { //Constructor calling Parent Constructor
			setStudentID(id);
		}

		void setStudentID(int id) {
			while (id <= 0 || cin.fail()) {
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid Student ID (>0). Enter again: ";
				cin >>id;
			}
			student_id =  id;
			cin.ignore(); // clean buffer
		}

		void display_student_info() const {
			cout<<"==============================================="<<endl;
			cout << "\n------- Student Information ---------\n";
			cout<<"===============================================\n"<<endl;
			cout << "Student ID: " << student_id << endl;
			display_person_info();
		}
};

#endif