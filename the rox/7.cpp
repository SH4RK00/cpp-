/*7. Write a C++ program to implement a class
 called Employee that has private member variables
  for name, employee ID, and salary. Include member
   functions to calculate and 
set salary based on employee performance.*/

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string empName, int id, double initialSalary) {
        name = empName;
        employeeID = id;
        salary = initialSalary;
    }

    // Get
    string getName() {
        return name;
    }

    int getEmployeeID() {
        return employeeID;
    }

    double getSalary() {
        return salary;
    }

    //calculate and set salary 
    void setSalaryBasedOnPerformance(double performanceRating) {
        if (performanceRating >= 4.0) {
            salary *= 1.10; // 10% increase / excellent performance
        } else if (performanceRating >= 3.0) {
            salary *= 1.05; // 5% increase / good performance
        } else {
            salary *= 0.95; // 5% decrease / poor performance
        }
    }

    // display employee
    void displayEmployeeInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Current Salary: $" << salary << endl;
    }
};

int main() {
    //Employee object
    Employee myEmployee("Hrithik", 12345, 50000.0);

    // Display employee
    myEmployee.displayEmployeeInfo();

    // Set salary based on employee performance
    myEmployee.setSalaryBasedOnPerformance(4.2);

    // Display updated employee information
    myEmployee.displayEmployeeInfo();

    return 0;
}