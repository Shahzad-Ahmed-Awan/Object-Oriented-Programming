#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main () {

	ifstream file("notes.txt");
	string line;
	int lineCount = 0;

	while (getline(file, line)) {
		cout << line << endl;
		lineCount++;
	}

	cout << "\n\nTotal number of lines in notes.txt: " << lineCount << endl;
	file.close();

	return 0;

}