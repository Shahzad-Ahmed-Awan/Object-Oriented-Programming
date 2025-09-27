#include <iostream>
#include <fstream>
#include <string>
#include <ctime>      //additional library learned for adding time stamped on errors
using namespace std;

template<class T>
class Logger {
public:
    T error;

    void log() {          // function for logging error from user and it also add the time stampp automatically
        time_t now = time(0);
        char* dt = ctime(&now);
        string timeStr = dt;
        if (!timeStr.empty() && timeStr.back() == '\n') {
            timeStr.pop_back();
        }

        ofstream fout("error_log.txt", ios::app);             // store all the errors in file to check latter
        fout << "[" << timeStr << "] " << error << endl;
        fout.close();

        cout << "Logged: " << error << endl;
    }
};


void viewLogs() {// Function to view all previous errors from file
    ifstream fin("error_log.txt");
    if (!fin.is_open()) {
        cout << "No logs found yet.\n";
        return;
    }

    cout << "\n---- Previous Errors ----\n";
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    cout << "-------------------------\n";
    fin.close();
}


