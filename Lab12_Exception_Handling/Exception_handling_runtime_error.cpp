//*******************************************************************************************************************
                         //Lab # 12   C++ Provided Exception Handling (runtime error like user input)
//*******************************************************************************************************************
#include <iostream>
#include <stdexcept> // Required for runtime_error and invalid_argument
#include <string>

using namespace std;

// Class to simulate a simple bank account focusing on exception handling.
class BankAccount {
private:
    int balance;

public:
    // Constructor initializes the account balance and throws an exception on invalid input.
    BankAccount(int b) {
        // --- EXception handling
        if (b < 0) {
            // Throw a std::invalid_argument (a type of logic error) for bad input.
            throw invalid_argument("Initial balance cannot be negative!");
        }
        balance = b;
        cout << "Account created successfully with initial balance: Rs. " << balance << endl;
    }

    // Method to attempt a withdrawal, throwing exceptions for both logic and runtime errors.
    void withdraw(int amount) {
        // --- EXCEPTION HANDLING: Invalid Withdrawal Amount (Logic Error) ---
        if (amount <= 0) {
            throw invalid_argument("Withdrawal amount must be a positive number!");
        }

        // --- EXCEPTION HANDLING: Insufficient Funds (Runtime Error) ---
        if (amount > balance) {
            // Throw a std::runtime_error.
            throw runtime_error("Insufficient funds in account!");
        }

        // If successful, update the balance.
        balance -= amount;
        cout << "Withdrawal successful! Remaining balance: Rs. " << balance << endl;
    }
};

int main() {
    int initialBalance;
    // Initialize with a valid value, will be overwritten by user input upon success
    BankAccount acc(0); 
    
    // --- Loop 1: Account Setup (Repeats until valid initial balance is entered) ---
    while (true) {
        cout << "\nEnter the initial account balance (Rs.): ";
        
        // Check for non-numeric input
        if (!(cin >> initialBalance)) {
            cout << "\nInput Error! Please enter a valid number." << endl;
            cin.clear(); // Clear the error flags to keep screen clean
            cin.ignore(10000, '\n'); 
            continue; // Re-run the loop
        }

        try {
            // Attempt to create the BankAccount object. This might throw invalid_argument.
            acc = BankAccount(initialBalance);
            break; 
        }
        // Catch the invalid_argument exception (for negative initial balance)
        catch (const invalid_argument& e) {
            cout << "\nAccount Setup Failed! Error: " << e.what() << ". Please try again." << endl;
        }
    }

    // --- Loop 2: Withdrawal TransactionRepeats until a successful withdrawal occurs ---
    while (true) {
        int withdrawalAmount;
        cout << "\nEnter the amount to withdraw (Rs.): ";
        
        // Check for non-numeric input
        if (!(cin >> withdrawalAmount)) {
            cout << "\nInput Error! Please enter a valid number." << endl;
            cin.clear();
            // Simplified approach to discard bad input
            cin.ignore(10000, '\n');
            continue; // Re-run the loop
        }

        try {
            // Suspected code where error can ocurr
            acc.withdraw(withdrawalAmount);
            break; // If no exception is thrown, break out of the transaction loop
        }
        // Catch the invalid_argument exception (for negative/zero withdrawal amount)
        catch (const invalid_argument& e) {
            cout << "\nInput Error! Error: " << e.what() << ". Please re-enter withdrawal amount." << endl;
           
        }
        // Catch the specific runtime error (Insufficient funds)
        catch (const runtime_error& e) {
            cout << "\nTransaction Failed! Error: " << e.what() << ". Please re-enter withdrawal amount." << endl;
			}
            
        // Catch any other unexpected errors
        catch (...) {
            cout << "\nAn unexpected error occurred during the process." << endl;
            break; // break here to prevent an infinite loop unhandled error
        }
    }

    return 0;
}
