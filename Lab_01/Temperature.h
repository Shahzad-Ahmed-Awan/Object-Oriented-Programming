#define TEMPERATURE_H 
#include <iostream> 
using namespace std; 
 
class Temperature { 
 //private data Member
    float celsius; 
 public: 
    void getCelsius() { 
        cout << "Enter temperature in Celsius: "; 
        cin >> celsius; 
    } 
    //method for Conversion
    float toFahrenheit() { 
        return (celsius * 9.0f / 5.0f) + 32.0f; 
    } 
    //method for displaying converted Temperature
    void displayFahrenheit() { 
        cout<<endl;
        cout<<"============================"<<endl;
        cout<<"----Result is Below-----"<<endl;
        cout<<"============================"<<endl<<endl;
        cout << celsius << "C = " << toFahrenheit() << "F\n"; 
    } 
}; 