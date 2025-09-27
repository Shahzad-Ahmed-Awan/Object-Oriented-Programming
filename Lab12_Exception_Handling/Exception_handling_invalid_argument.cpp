//*******************************************************************************************************************
                         //Lab # 12   C++ Provided Exception Handling (invalid_argument)
//*******************************************************************************************************************
#include <iostream>
#include <stdexcept> // For std::invalid_argument
#include <string>

using namespace std;

// Class definition for Student
class Student {
public:
    string name;
    int age;

    // Constructor validates the age
    Student(string n, int a) {
        // Exception handling logic: checks the business rule
        if (a < 0) {
            // Throw a built-in exception for invalid input
            throw invalid_argument("Age cannot be negative!");
        }
        name = n;
        age = a;
    }

    void display() {
        cout << "\n--- Student Record ---" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main() {
    string studentName;
    int studentAge;

    // Get input from the user
    cout << "Enter student name: ";
    // Use getline to handle names with spaces
    getline(cin, studentName); 
    
    cout << "Enter student age: ";
    // Check if age can be read as a number
    if (!(cin >> studentAge)) {
        cout << "Error: Could not read age as a number. Exiting." << endl;
        return 1;
    }

    // Suspected Code here
    try {
        
        Student s(studentName, studentAge);//error can be here in user input
        
        // If successful, display the data
        s.display();
    }
    // Catch the specific built-in exception thrown by the constructor due to user input
    catch (const invalid_argument& e) {
        cout << "\n--- ERROR ---" << endl;
        // e.what() read message recive 
        cout << "Exception: " << e.what() << endl;
    }
    // general catch block for unexpected errors
    catch (...) {
        cout << "\nAn unknown error occurred." << endl;
    }

    return 0;
}
