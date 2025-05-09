#define VOTER_H 
#include <iostream> 
#include <string> 
using namespace std; 
 
class Voter { 
public:
    string name; 
    int age; 
  
    void getData() { 
        cout << "Enter name: "; 
        cin>>name; 
        cout << "Enter age: "; 
        cin >> age; 
        
    } 
 
    bool isEligible();
}; 
//method outside class
bool Voter :: isEligible() { 
        return age > 18; 
    } 
 
