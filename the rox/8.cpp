/*8. Write a C++ program to implement a 
class called Date that has private member
 variables for day, month, and year. Include
  member functions to set and get these variables,
 as well as to validate if the date is valid.*/


 #include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Get
    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    // Set
    void setDay(int d) {
        if (isValidDate(day, month, year)) {
            day = d;
        } else {
            cout << "Invalid day. Please enter a valid day." << endl;
        }
    }

    void setMonth(int m) {
        if (isValidDate(day, m, year)) {
            month = m;
        } else {
            cout << "Invalid month. Please enter a valid month." << endl;
        }
    }

    void setYear(int y) {
        if (isValidDate(day, month, y)) {
            year = y;
        } else {
            cout << "Invalid year. Please enter a valid year." << endl;
        }
    }

    // date is valid?
    bool isValidDate(int d, int m, int y) {
        if (m < 1 || m > 12) {
            return false;
        }
        if (d < 1 || d > daysInMonth(m, y)) {
            return false;
        }
        return true;
    }

    //number of days in a month
    int daysInMonth(int m, int y) {
        if (m == 2) {
            if (isLeapYear(y)) {
                return 29;
            } else {
                return 28;
            }
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            return 30;
        } else {
            return 31;
        }
    }

    //  leap year?
    bool isLeapYear(int y) {
        if (y % 4 == 0) {
            if (y % 100 == 0) {
                if (y % 400 == 0) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return true;
            }
        } else {
            return false;
        }
    }

    //display the date
    void displayDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    //Date object
    Date myDate(12, 8, 2022);

    // Display date
    myDate.displayDate();

    // Set the day, month, and year
    myDate.setDay(15);
    myDate.setMonth(9);
    myDate.setYear(2023);

    //updated date
    myDate.displayDate();

    return 0;
}