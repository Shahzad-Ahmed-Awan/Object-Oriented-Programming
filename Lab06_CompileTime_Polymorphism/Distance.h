#ifndef DISTANCE_H
#define DISTANCE_H

#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int feet = 0, int inches = 0) {
        this->feet = feet;
        this->inches = inches; //this for current instance
    }

    bool operator==(const Distance& other) {
        return (this->feet == other.feet && this->inches == other.inches);
    }

    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;

        // Loop to validate inches input
        do {
            cout << "Enter Inches(0-11): ";
            cin >> inches;

            if (inches < 0 || inches > 11) {
                cout << "Invalid inches. Must be between 0 and 11. Please try again.\n";
            }

        } while (inches < 0 || inches > 11);
    }
};

#endif
