#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num < 2) return false;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int next = num + 1;
    while(!isPrime(next))
        next++;

    cout << "Next prime number after " << num << " is " << next << endl;
    return 0;
}
