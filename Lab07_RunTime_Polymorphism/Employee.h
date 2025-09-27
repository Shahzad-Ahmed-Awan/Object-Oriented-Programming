// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
	public:
		virtual double calculateSalary() {
			cout << "Base Employee salary calculation called." << endl;
			return 0;
		}

		virtual ~Employee() {}  // Virtual destructor
};

class PermanentEmployee : public Employee {
	private:
		double basicSalary;
		double bonus;

	public:
		PermanentEmployee(double basicSalary, double bonus) {
			this->basicSalary = basicSalary;
			this->bonus = bonus;
		}

		double calculateSalary() override {
			return this->basicSalary + this->bonus;
		}
};

class ContractEmployee : public Employee {
	private:
		double hourlyRate;
		int hoursWorked;

	public:
		ContractEmployee(double hourlyRate, int hoursWorked) {
			this->hourlyRate = hourlyRate;
			this->hoursWorked = hoursWorked;
		}

		double calculateSalary() override {
			return this->hourlyRate * this->hoursWorked;
		}
};

#endif
