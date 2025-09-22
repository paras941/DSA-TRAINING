#include <iostream>
#include <cmath> 
using namespace std;

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s*s == x);
}

bool isFibonacci(int n) {
    return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isFibonacci(num))
        cout << num << " is in Fibonacci series." << endl;
    else
        cout << num << " is not in Fibonacci series." << endl;

    return 0;
}
