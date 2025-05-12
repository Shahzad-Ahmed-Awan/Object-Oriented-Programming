#include<iostream>
using namespace std;
class BankAccount {
public:
int*balance;

// Default constructor
BankAccount(int bal) {
balance = new int(bal);
cout<<"Constructor called. Balance = "<<*balance<<endl;
}

// Shallow copy constructor
BankAccount(const BankAccount& obj) {
balance = obj.balance; // Shallow copy - both objects share same memory
cout<<"Shallow Copy Constructor called. Shared balance = "<<*balance<<endl;
}

// Destructor
~BankAccount() {
cout<<"Destructor called. Deleting balance = "<<*balance <<" at address "<<balance<<endl;
delete balance; 
}
};