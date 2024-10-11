/*6. Write a C++ program to find 
and replace a specific word
 in a text file.*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Specify the input file, output file, word to find, and word to replace
    string inputFile = "input.txt";
    string outputFile = "output.txt";
    string findWord = "old";
    string replaceWord = "new";

    // Create file stream objects for input and output files
    ifstream infile(inputFile);
    ofstream outfile(outputFile);

    //opened?
    if (!infile) {
        cout << "Unable to open input file";
        return 1; 
    }
    if (!outfile) {
        cout << "Unable to open output file";
        return 1;
    }

    // Read the input file line by line
    string line;
    while (getline(infile, line)) {
        // Find and replace the word
        size_t pos = 0;
        while ((pos = line.find(findWord, pos)) != string::npos) {
            line.replace(pos, findWord.length(), replaceWord);
            pos += replaceWord.length();
        }

        // Write the modified line to the output file
        outfile << line << endl;
    }

    // Close the files
    infile.close();
    outfile.close();

    cout << "Word replaced successfully!" << endl;

    return 0;
}