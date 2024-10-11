/*7. Write a C++ program to 
append new data to an existing text file.*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Specify the file name and the new data to append
    string fileName = "example.txt";
    string newData[] = {"This is the first line of new data.",
                        "This is the second line of new data.",
                        "This is the third line of new data."};

    // Create a file stream object in append mode
    ofstream file(fileName, ios_base::app);

    // Check if the file is opened successfully
    if (!file) {
        cout << "Unable to open file";
        return 1; // return with error code
    }

    // Append the new data to the file
    for (int i = 0; i < 3; i++) {
        file << newData[i] << endl;
    }

    // Close the file
    file.close();

    cout << "Data appended successfully!" << endl;

    return 0;
}