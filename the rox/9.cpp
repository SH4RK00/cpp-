/*9. Write a C++ program to implement a class
 called Student that has private member variables 
 for name, class, roll number, and marks. Include
  member functions to calculate the grade based on the 
marks and display the student's information.*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    double marks;

public:
    // Constructor 
    Student(string n, string c, int r, double m) {
        name = n;
        className = c;
        rollNumber = r;
        marks = m;
    }

    // Get
    string getName() {
        return name;
    }

    string getClassName() {
        return className;
    }

    int getRollNumber() {
        return rollNumber;
    }

    double getMarks() {
        return marks;
    }

    //calculate the grade
    string calculateGrade() {
        if (marks >= 90) {
            return "A";
        } else if (marks >= 80) {
            return "B";
        } else if (marks >= 70) {
            return "C";
        } else if (marks >= 60) {
            return "D";
        } else {
            return "F";
        }
    }

    //display the student
    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    // Student object
    Student myStudent("hrithik", "XII", 12345, 85.0);

    // student's information
    myStudent.displayStudentInfo();

    return 0;
}