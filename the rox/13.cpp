/*3. Write a C++ program to
 count the number of lines in a text file.*/

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    //stream object
    ifstream myfile("example.txt");

    //opened?
    if (!myfile) {
        cout << "Unable to open file";
        return 1; // return false
    }

    // Count the number of lines 
    int lineCount = 0;
    string line;
    while (getline(myfile, line)) {
        lineCount++;
    }

    // Close the file
    myfile.close();

    // Display the number of lines
    cout << "Number of lines in the file: " << lineCount << endl;

    return 0;
}