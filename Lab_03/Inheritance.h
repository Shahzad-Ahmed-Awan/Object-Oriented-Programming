#include<iostream>
#include <string>
using namespace std;
//PArent Class
class Person {
	protected:
		string name;
		int age;
	public:
		void setPerson(string n, int a) {//setter
			name = n;
			age = a;
		}
		void showPerson() {//display method
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
//Child Class
class Student : public Person {
	private:
		int rollNo;
	public:
		void setStudent(string n, int a, int r) {
			setPerson(n, a); // Must call base class method
			rollNo = r;
		}
		void showStudent() {
			showPerson(); // Call base class method
			cout<<"Roll No: "<<rollNo<<endl;
		}
};