#define PRODUCT_H 
#include <iostream> 
using namespace std; 
 
class Product { 
private: 
    string name; 
    double price; 
    int quantity; 
 
public: 
// setter for all field

        void setName(string n) {
        while(n.empty()) {
            cout << "Name cannot be empty! Please enter again: ";
            getline(cin, n);  //Must for Allowing Spaces 
        }
        name = n;
    }
	    void setPrice(double p) {
        while(p <= 0) {
            cout << "Price must be positive! Please enter again: ";
            cin >> p;
        }
        price = p;
    }
		 void setQuantity(int q) {
        while(q < 0) {
            cout << "Quantity cannot be negative! Please enter again: ";
            cin >> q;
        }
        quantity = q;
    } 
 
 //Getter for all fields
    string getName() const { 
        return name; 
    } 
 
    double getPrice() const { 
        return price; 
    } 
 
    int getQuantity() const { 
        return quantity; 
    } 
}; 