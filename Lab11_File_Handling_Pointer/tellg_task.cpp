//*******************************************************************************************************************
                 //Lab # 11  C++ File Pointer (tellg to get cursor position in file opened in reading mode)
//*******************************************************************************************************************
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Open 'greet.txt' for input (reading)
    fstream in("greet.txt", ios::in); 
    
    // Get the initial position of the read pointer (should be 0)
    cout << "Postion of read pointer before reading: " << in.tellg() << endl;
    
    char ch;
    // Read a single character
    in.get(ch);
    
    // Get the new position of the read pointer (should be 1)
    cout << "Postion of read pointer after reading a single character: " << in.tellg() << endl;
    
    in.close();
    return 0;
}
