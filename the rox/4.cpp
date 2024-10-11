/*4. Write a C++ program to create a class 
called Car that has private member variables for
 company, model, and year. Implement
 member functions to get and set these variables.*/

#include <bits/stdc++.h>
using namespace std;


class Car {
private:
    string company;
    string model;
    int year;

public:
    // Constructor 
    Car(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    // Getter functions 
    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    // Setter functions 
    void setCompany(string c) {
        company = c;
    }

    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Camry", 2022);

    // Display the car's information 
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    // Modify the car's information 
    myCar.setCompany("Honda");
    myCar.setModel("Civic");
    myCar.setYear(2021);

    // Display the update
    std::cout << "Updated Company: " << myCar.getCompany() << std::endl;
    std::cout << "Updated Model: " << myCar.getModel() << std::endl;
    std::cout << "Updated Year: " << myCar.getYear() << std::endl;

    return 0;
}