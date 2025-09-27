#include <iostream>
using namespace std; // Using the standard namespace globally

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
    cout << "The Class reads the count as: " << Classroom::instance_count << endl;

    cout << "\n--- Unique ID Check (Non-Static) ---" << endl;
    studentA.show_details();
    studentB.show_details();
    studentC.show_details();

    return 0;
}
