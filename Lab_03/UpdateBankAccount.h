#include<iostream>
using namespace std;

class UpdateBankAccount {
	public:
		int*balance;
// Default constructor
		UpdateBankAccount(int bal) {
			balance=new int(bal);
			cout <<"Constructor called. Balance = "<<*balance<<endl;
		}

// Deep copy constructor
		UpdateBankAccount(const UpdateBankAccount &obj) {
			balance=new int(*obj.balance); // Deep copy - new memory allocation
			cout<<"Deep Copy Constructor called. Copied balance ="<<*balance<<endl;
		}

// Destructor
		~UpdateBankAccount() {
			cout<<"Destructor called. Deleting balance = "<<*balance <<" at address "<<balance<<endl;
			delete balance;
		}
}; 