#include<iostream>
#include "Student.h"
#include "Rectangle.h"       //including custom header files
#include "Voter.h"
#include "Temperature.h"
#include "Calculator.h"
#include "Product.h"
using namespace std;

int main() {

//***************************************| TASK-01 | *******************************

	// using student.h data
//
//    Student s;        //creating object to use data from student.h
//    s.getData();
//    s.displayData();


//***************************************| TASK-02 | *******************************

//    //Using REctangular.h data
//
//	Rectangle rect;            //creating object to used data from the rectangular.h
//	rect.setDimensions();
//	cout << "\nArea      : " << rect.area() << " m2\n";
//	cout << "Perimeter : " << rect.perimeter() << " m\n";



//***************************************| TASK-03 | *******************************

// Voter v;                  //creating object to used data from the voter.h
//    v.getData();
//
//	  if (v.isEligible()) {
//
//            cout << v.name << " is eligible to vote."<<endl;
//        }
//      else {
//
//            cout << v.name << " is NOT eligible to vote.\n"<<endl;
//    }



//***************************************| TASK-04 | *******************************

//	Temperature temp;                      //creating object to used data from temperature.h
//	temp.getCelsius();
//	temp.displayFahrenheit();



//***************************************| TASK-05 | *******************************

//   Calculator calc;                          //creating object to used data from the rectangular.h
//    calc.getNumbers();
//
//    cout << "\nChoose operation:\n"                 // Showing Menu options
//         << "+) Add\n"
//         << "-) Subtract\n"
//         << "*) Multiply\n"
//         << "/) Divide\n"
//         << "Enter choice: ";
//
//    char choice;
//    cin >> choice;
//
//    float result = 0.0f;
//    switch (choice) {                                  //using switch for opting outing
//        case '+': result = calc.add();
//		   break;
//        case '-': result = calc.subtract();
//		 break;
//        case '*': result = calc.multiply();
//		 break;
//        case '/': result = calc.divide();
//		 break;
//        default:
//            cout << "Invalid choice.\n";
//            return 0;
//    } // showing result 
//    cout<<"====================================================================="<<endl<<endl;
//    cout << "Result: "<<calc.num1<<choice <<calc.num2 <<"="<< result <<endl<<endl;
//    cout<<"====================================================================="<<endl;

//***************************************| TASK-06 Encapsulation | *******************************

//	Product p;
//	p.setName("");                  // Checking for Error 
//	p.setPrice(-50);
//
//
//	p.setQuantity(-2);             
//	p.setName("Laptop");                // setting valid values
//	p.setPrice(1200.50);
//	p.setQuantity(5);
//	
//	cout << "Product: " << p.getName() << endl;         // printing out data
//	cout << "Price: $" << p.getPrice() << endl;
//	cout << "Quantity: " << p.getQuantity() << endl;

	return 0;
}