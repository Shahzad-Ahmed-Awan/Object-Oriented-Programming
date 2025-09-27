//*******************************************************************************************************************
                         //Lab # 12   C++ Provided Exception Handling (Array out of Bound of Error)
//*******************************************************************************************************************
#include <iostream>
#include <stdexcept>
#include <array>
#include <string>

using namespace std;

const int ARRAY_SIZE = 3;

void store_value(array<int, ARRAY_SIZE>& arr, int index, int value) {
    arr.at(index) = value;

    cout << "Success: Stored value " << value << " at index " << index << "." << endl;
}

int main(){
    array<int, ARRAY_SIZE> data_array = {0};

    cout << "--- Array Bounds Exception Handling (Size " << ARRAY_SIZE << ") ---" << endl;

    cout << "Initial Array: [" << data_array[0] << ", " << data_array[1] << ", " << data_array[2] << "]" << endl;

    int user_index;
    int user_value;
    int i = 0; // Tracks number of successful entries

    while (true) {
        cout << "\n--- Entry " << i + 1 << " ---" << endl;

        // Prompt now includes the exit instruction
        cout << "Enter the index (0, 1, or 2) to modify (or -1 to exit): ";
        while (!(cin >> user_index)) { //handling non numeric data if entered
            cout << "Invalid input. Please enter an integer index: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        // Exit condition
        if (user_index == -1) {
            break;
        }
        
        //handling non numeric data if entered
        cout << "Enter the integer value to store: ";
        while (!(cin >> user_value)) {
            cout << "Invalid input. Please enter an integer value: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        try {
            store_value(data_array, user_index, user_value);
            i++; // Increment only on successful update
        }
        //catch to handle array out of bound error
        catch (const out_of_range& e) {
            cout << "\nError: An exception occurred!" << endl;
            cout << "Exception Type: Array Out of Bound" << endl; // Explicitly showing the error type
            cout << "Details: " << e.what() << endl;
            cout << "Valid indices are 0, 1, and 2. Please try again." << endl;
        }
        //General Catch Block for unexpected error
        catch (...) {
            cout << "\nAn unknown error occurred." << endl;
        }
    }

    cout << "\n=======================================================" << endl;
    cout << "Array modification complete." << endl;
    cout << "Final Array State: [" << data_array[0] << ", " << data_array[1] << ", " << data_array[2] << "]" << endl;

    cout << "\nProgram finished safely." << endl;

    return 0;
}
