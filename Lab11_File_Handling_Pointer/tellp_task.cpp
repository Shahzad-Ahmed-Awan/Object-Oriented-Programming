//*******************************************************************************************************************
                         //Lab # 11  C++ File Pointer (tellp to get cursor position in file opened in wrting mode)
//*******************************************************************************************************************
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Open 'greet.txt' for output (writing). This mode implies truncation.
    fstream out("greet.txt", ios::out); 
    
    // Get the initial position of the write pointer (should be 0)
    cout << "Postion of write pointer before writing: " << out.tellp() << endl;
    
    // Write a single character
    out << "A";
    
    // Get the new position of the write pointer (should be 1)
    cout << "Postion of write pointer after writing a single character: " << out.tellp() << endl;
    
    out.close();
    return 0;
}
