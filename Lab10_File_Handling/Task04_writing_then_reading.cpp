#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Step 1: Write student details clearly
    ofstream outFile("students.txt");
    outFile << "Student 1:\n";
    outFile << "  Name     : Ali\n";
    outFile << "  Roll No. : 1001\n\n";

    outFile << "Student 2:\n";
    outFile << "  Name     : Sara\n";
    outFile << "  Roll No. : 1002\n\n";

    outFile << "Student 3:\n";
    outFile << "  Name     : Ahmed\n";
    outFile << "  Roll No. : 1003\n";
    outFile.close();

    // Step 2: Read and display student details
    ifstream inFile("students.txt");
    string line;
    cout << "Student Details:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
