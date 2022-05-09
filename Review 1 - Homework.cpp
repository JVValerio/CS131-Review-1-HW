////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Word Counter
////
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int userChoice = 0;
    int userNum;
    cout << "This program's role is to convert the following:" << endl;
    cout << "1. Celsius to Fahrenheit\n" << "2. Centimeters to inches and feet\n" 
         << "3. Kilometers per hour to Miles per hour" << endl << endl;
    while (userChoice < 1 || userChoice > 3) {
        cout << "Enter the one of the respective numbers to start (1, 2, or 3): ";
        cin >> userChoice;
    }

    // Celsius to Fahrenheit
    if (userChoice == 1) {
        int fahrenheit;
        cout << "Enter your temperature in celsius: ";
        cin >> userNum;
        fahrenheit = userNum * (9 / 5) + 32;
        cout << userNum << " celsius is equal to " << fahrenheit << " fahrenheit." << endl;
    }
    // cm to in and ft
    else if (userChoice == 2) {
        double inches;
        int feet;
        cout << "Enter your centimeter(s): ";
        cin >> userNum;
        inches = userNum / 2.54;
        feet = inches / 12;
        inches = inches - (feet * 12.0);
        cout << setprecision(3) << userNum << " cm is equal to " << feet << " feet and " << inches << " inches." << endl;
    }
    // kmh to mph
    else if (userChoice == 3) {
        double mph;
        cout << "Enter your kilometer(s) per hour: ";
        cin >> userNum;
        mph = userNum * 0.6213712;
        cout << setprecision(3) << userNum << " kph is equal to " << mph << " mph." << endl;
    }

    system("pause");
    return 0;
}

