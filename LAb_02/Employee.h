#include<iostream> 
#include<string> 
using namespace std; 
 
class Employee { 
private: 
    int id; 
    string name; 
    float salary; 
 
public: 
    Employee() { //default constructor
        id = 0; 
        name = "Not Assigned"; 
        salary = 0.0f; 
    } 
 
    void displayDetails() { //display function
        cout<<"\n************************************"<<endl;
        cout << "   ---- Employee Details ---" << endl; 
        cout<<"*************************************"<<endl;
        cout << "ID: " << id << endl; 
        cout << "Name: " << name << endl; 
        cout << "Salary: " << salary << endl; 
    } 
}; 