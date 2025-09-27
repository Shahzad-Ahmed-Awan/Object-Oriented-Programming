#include <iostream>
#include <fstream>
using namespace std;

int main () {
	// First creating object & Opening the file to read from
	ifstream sourceFile ("notes.txt");
	//Second creating a file to write to
	ofstream destFile ("copy_of_notes.txt");

	string line;

	while(getline(sourceFile,line)) {
		destFile << line <<endl;  //writing to destination File instead of console
	}

	cout << "File copied successfully to copy_of_notes.txt" << endl;

	//Closing the both files
	sourceFile.close();
	destFile.close();

	return 0;
}