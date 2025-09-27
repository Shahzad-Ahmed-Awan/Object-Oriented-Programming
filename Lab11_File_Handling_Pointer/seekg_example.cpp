//*******************************************************************************************************************
            //Lab # 11  C++ File Pointer (seekg to move get pointer)
//*******************************************************************************************************************
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Open 'student.txt' for input and output (reading and writing)
    fstream file("student.txt", ios::in | ios::out); 
    
    // Display current read pointer position (should be 0)
    cout << "Position of pointer before reading: " << file.tellg() << endl;
    
    char ch;
    
    // Move the read pointer 13 bytes from the beginning (ios::beg is implicit)
    cout << "Move the read pointer position to 13" << endl;
    file.seekg(13);
    
    // Read and display characters from the new position
    while(file.get(ch)){
        cout << "Character Read: " << ch << " Position of pointer after reading: " << file.tellg() << endl;
    }
    
    file.close();
    return 0;
}
