/*5. Write a C++ program to copy the
 contents of one text file to another.*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // stream obj input and output
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    //flies open?
    if (!inputFile) {
        cout << "Unable to open input file ";
        return 1; 
    }
    if (!outputFile) {
        cout << "Unable to open output file";
        return 1;
    }

    // Copy the contents of the input file to the output file
    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}