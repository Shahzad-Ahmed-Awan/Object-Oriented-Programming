#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Step 1: Create and Write to file
    ofstream writeFile("notes.txt");
    writeFile << "This is the first line.\n";
    writeFile << "This is the second line.\n";
    writeFile << "This is the third line.\n";
    writeFile.close();

    // Step 2: Read and display contents
    ifstream readFile("notes.txt");
    string line;
    cout << "Contents of notes.txt:" << endl;
    while (getline(readFile, line)) {
        cout << line << endl;
    }
    readFile.close();

    // Step 3: Append your name and roll number
    fstream appendFile("notes.txt", ios::app); // ios::app means append mode
    appendFile << "Name:      Shahzad Ahmed Awan \n";
    appendFile << "Roll No:      15 \n";
    appendFile.close();
    
    
      // Step 4: Reading Again
    ifstream readFileAgain("notes.txt");
    string text;
    cout << "\n\nContents of notes.txt after Append is:" << endl;
    while (getline(readFileAgain, text)) {
        cout << text << endl;
    }
    readFileAgain.close();

    return 0;
}
