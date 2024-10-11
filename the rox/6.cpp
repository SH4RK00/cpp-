/*6. Write a C++ program to create a class called 
Triangle that has private member variables for the 
lengths of its three sides. Implement member functions 
to determine if the
 triangle is equilateral, isosceles, or scalene.*/

 #include <iostream>
using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor 
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    //triangle is valid?
    bool isValid() {
        if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
            return true;
        } else {
            return false;
        }
    }

    //type of triangle
    void triangleType() {
        if (!isValid()) {
            cout << "Invalid triangle." << endl;
        } else if (side1 == side2 && side2 == side3) {
            cout << "equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << " isosceles." << endl;
        } else {
            cout << "scalene." << endl;
        }
    }
};

int main() {
    // object
    Triangle myTriangle(5.0, 5.0, 5.0);

    //type of triangle
    myTriangle.triangleType();

    //another Triangle 
    Triangle anotherTriangle(3.0, 4.0, 5.0);

    //type of triangle
    anotherTriangle.triangleType();

    //invalid Triangle
    Triangle invalidTriangle(1.0, 2.0, 5.0);

    //type of triangle
    invalidTriangle.triangleType();

    return 0;
}