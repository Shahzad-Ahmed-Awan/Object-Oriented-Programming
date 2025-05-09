#define STUDENT_H 
#include <iostream> 
#include <string> 
using namespace std; 
 
class Student {
 
    string name; 
    int rollNumber; 
    float marks; 

   public:  
   //method to input detail from user
    void getData() { 
        cout << "Enter student name: "; 
        cin>>name;
        cout << "Enter roll number: "; 
        cin >> rollNumber; 
        cout << "Enter marks: "; 
        cin >> marks; 
    } 
    //Method to show details
    void displayData() { 
        cout << "\n-- Student Information --\n"; 
        cout << "Name       : " << name << "\n"; 
        cout << "Roll Number: " << rollNumber << "\n"; 
        cout << "Marks      : " << marks << "\n"; 
    } 
}; 
 
