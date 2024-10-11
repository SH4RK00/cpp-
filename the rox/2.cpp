/*2. Write a C++ program to create a class called 
Rectangle that has private member variables for length and width.
 Implement member
 functions to calculate the rectangle's area and perimeter*/

 #include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constrctor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

   
    double calculateArea() {
        return length * width;
    }

    
    double calculatePerimeter() {
        return 2 * (length + width);
    }

  
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }
};

int main() {
    Rectangle rectangle(4.0, 5.0); 

    cout << "Length: " << rectangle.getLength() << endl;
    cout << "Width: " << rectangle.getWidth() << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

    return 0;
}