/*4. Write a C++ program to count 
the number of words in a text file.*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    //stream object
    ifstream myfile("example.txt");

    //opened?
    if (!myfile) {
        cout << "Unable to open file";
        return 1; 
    }

    // Count number of words 
    int wordCount = 0;
    string word;
    while (myfile >> word) {
        wordCount++;
    }

    // Close
    myfile.close();

    // Display the number of words
    cout << "Number of words in the file: " << wordCount << endl;

    return 0;
}