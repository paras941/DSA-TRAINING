#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;


    if (num2 == 0) {
        cout << "Cannot divide by zero!" << endl;
    } 
    else {
        if (num1 % num2 == 0)
            cout << num1 << " is divisible by " << num2 << endl;
        else
            cout << num1 << " is not divisible by " << num2 << endl;
    }

    return 0;
}
