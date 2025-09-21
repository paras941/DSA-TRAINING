// Write a program to calculate simple interest.
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    // Input from user
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display result
    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}
