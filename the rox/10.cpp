/*10. Write a C++ program to implement a class 
called Shape with virtual member functions for calculating
 area and perimeter. Derive classes such as Circle,
  Rectangle, and Triangle from the Shape
 class and override virtual functions accordingly.*/

#include <bits/stdc++.h>
using namespace std;

// Base
class Shape {
protected:
    string shapeName;

public:
    //shape name
    Shape(string name) {
        shapeName = name;
    }

    // Virtual area
    virtual double calculateArea() = 0;

    // Virtual perimeter
    virtual double calculatePerimeter() = 0;

    // display shape name
    void displayShapeName() {
        cout << "Shape: " << shapeName << endl;
    }
};

// Derived Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : Shape("Circle") {
        radius = r;
    }

    // Override circleArea
    double calculateArea() {
        return 3.14159 * pow(radius, 2);
    }

    // Override Perimeter
    double calculatePerimeter() {
        return 2 * 3.14159 * radius;
    }
};

//Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    //rectangle object
    Rectangle(double l, double w) : Shape("Rectangle") {
        length = l;
        width = w;
    }

    // Override rectArea
    double calculateArea() {
        return length * width;
    }

    // Override Perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

//  Triangle
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    //triangle object
    Triangle(double s1, double s2, double s3) : Shape("Triangle") {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Override trianArea using Heron's formula
    double calculateArea() {
        double semiPerimeter = (side1 + side2 + side3) / 2;
        return sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
    }

    // Override Perimeter 
    double calculatePerimeter() {
        return side1 + side2 + side3;
    }
};

int main() {
    //objects
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    // Display shape information and calculate area and perimeter
    cout << "Circle:" << endl;
    circle.displayShapeName();
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Perimeter: " << circle.calculatePerimeter() << endl;
    cout << endl;

    cout << "Rectangle:" << endl;
    rectangle.displayShapeName();
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;
    cout << endl;

    cout << "Triangle:" << endl;
    triangle.displayShapeName();
    cout << "Area: " << triangle.calculateArea() << endl;
    cout << "Perimeter: " << triangle.calculatePerimeter() << endl;

    return 0;
}