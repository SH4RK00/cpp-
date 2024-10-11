/*2. Write a C++ program to open an 
existing text file and 
display its contents on the console.*/

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // Create stream object
    ifstream myfile("example.txt");

    //file is opened?
    if (!myfile) {
        cout << "Unable to open file";
        return 1; 
    }

    // Read and display the file contents
    char ch;
    while (myfile.get(ch)) {
        cout << ch;
    }

    // Close the file
    myfile.close();

    return 0;
}