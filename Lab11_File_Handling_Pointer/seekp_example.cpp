//*******************************************************************************************************************
              //Lab # 11  C++ File Pointer (seekp to move put pointer)
//*******************************************************************************************************************
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Open 'student.txt' for input, output, and truncation
    fstream file("student.txt", ios::in | ios::out | ios::trunc); 
    
    // Write initial student records
    file << "01,Awais,3.5 ";
    file << "02,Kashif,3.8 ";
    file << "03,Zahid,2.5 ";
    file << "04,Ahmed,4.0 "; // This record will be overwritten
    
    // Display current write pointer position (which is 53 based on the comments in the PDF)
    cout << "Position of write pointer after writing: " << file.tellp() << endl;
    
    // Move the write pointer back by 13 characters from the current position (ios::cur)
    // 53 - 13 = 40 (start of the last record)
    file.seekp(-13, ios::cur); // relative with reference to current position.
    
    // Overwrite the last record
    file << "05,Nadir,2.78";
    
    file.close();
    return 0;
}
