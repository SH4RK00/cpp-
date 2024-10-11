/*1. Write a C++ program to implement a class 
called Circle that has private member
variables for radius. Include member functions
 to calculate the circle's area and circumference.*/

//soln;

#include <bits/stdc++.h>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return M_PI * pow(radius, 2);
    }

    double calculateCircumference() {
        return 2 * M_PI * radius;
    }

    double getRadius() {
        return radius;
    }
};

int main() {
    Circle circle(5.0); 

    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Circumference: " << circle.calculateCircumference() << endl;

    return 0;
}
