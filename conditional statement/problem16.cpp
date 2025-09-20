#include <iostream>
using namespace std;

int main() {
    float temp, converted;
    char choice;

    cout << "Enter temperature value: ";
    cin >> temp;
    cout << "Enter conversion type (C for Celsius to Fahrenheit, F for Fahrenheit to Celsius): ";
    cin >> choice;

    if(choice == 'C' || choice == 'c') {
        converted = (temp * 9/5) + 32;
        cout << temp << "°C = " << converted << "°F" << endl;
    } 
    else if(choice == 'F' || choice == 'f') {
        converted = (temp - 32) * 5/9;
        cout << temp << "°F = " << converted << "°C" << endl;
    } 
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
