#include <iostream>
using namespace std; // Using the standard namespace globally

// Use a more descriptive class name to hold the concept
class Classroom {
private:
    int student_id;

public:
    // 1. Static Data Member: This variable is shared across ALL objects of the Classroom class.
    // It exists only once in memory.
    static int instance_count;

    // Constructor: This runs every time a new object is created.
    Classroom(int id) : student_id(id) {
        // 2. Increment the shared static counter upon object creation.
        instance_count++;
        cout << "-> New Student object created (ID: " << student_id << ").\n";
        // Call the static function to immediately show the shared count change.
        print(); // Changed from get_instance_count() to print()
    }

    // Static Member Function (print): This function accesses and prints the shared static count.
    // Static functions can be called even if no objects exist, and they can only access static members.
    // It can be called using the class name (Classroom::print()).
    static void print() {
        cout << " Total objects created = " << instance_count << ".\n";
    }

    // Regular member function
    void show_details() const {
        cout << "   Object ID: " << student_id << ".\n";
    }
};

// 3. Initialization of the static member: Static members must be initialized
// outside the class definition in the global scope.
int Classroom::instance_count = 0;

int main() {
    // We can call the static function before creating any objects
    cout << "--- START OF PROGRAM ---" << endl;
    Classroom::print(); // Changed from get_instance_count() to print()

    cout << "\n--- Creating Object 1 (studentA) ---" << endl;
    Classroom studentA(1001);

    cout << "\n--- Creating Object 2 (studentB) ---" << endl;
    Classroom studentB(1002);

    cout << "\n--- Creating Object 3 (studentC) ---" << endl;
    Classroom studentC(1003);

    cout << "\n--- Final Demonstration of Shared Variable ---" << endl;

    // We can call the static function to get the final count.
    Classroom::print(); 

    cout << "\n--- Direct Access Check ---" << endl;

    // Note: While you can access the static member directly via an object (studentA.instance_count),
    // calling the static function (Classroom::print()) is the preferred approach.
    cout << "studentA reads the count as: " << studentA.instance_count << endl;
     cout << "studentB reads the count as: " << studentB.instance_count << endl;
    cout << "The Class reads the count as: " << Classroom::instance_count << endl;

    cout << "\n--- Unique ID Check (Non-Static) ---" << endl;
    studentA.show_details();
    studentB.show_details();
    studentC.show_details();

    return 0;
}
