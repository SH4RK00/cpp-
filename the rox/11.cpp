/*1. Write a C++ program to
 create a new text file and 
 write some text into it. */

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // Create a file stream
    ofstream myfile("example.txt");

    // Check if the file is opened successfully
    if (!myfile) {
        cout << "Unable to open file";
        return 1;
    }

    // Write some text into the file
    myfile << "Hello, World!" << endl;
    myfile << "This is a sample text file." << endl;
    

    // Close the file
    myfile.close();

    cout << "File created successfully." << endl;

    return 0;
}