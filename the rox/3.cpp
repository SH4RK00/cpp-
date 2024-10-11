/*3. Write a C++ program to create a class called 
Person that has private member variables for name, age and country.
 Implement member
 functions to set and get the values of these variables.*/

#include <bits/stdc++.h>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Constructor
    Person(string n = "", int a = 0, string c = "") {
        setName(n);
        setAge(a);
        setCountry(c);
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(string c) {
        country = c;
    }

    
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCountry() {
        return country;
    }
};

int main() {
    Person person("John Doe", 30, "USA"); 

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    // Update values using setter functions
    person.setName("hrithik");
    person.setAge(22);
    person.setCountry("united states of mymensingh > <");

    cout << "Updated Information:" << endl;
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}