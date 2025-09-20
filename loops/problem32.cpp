#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int a = 0, b = 1, nth;
    if(N == 1) nth = a;
    else if(N == 2) nth = b;
    else {
        for(int i = 3; i <= N; i++) {
            nth = a + b;
            a = b;
            b = nth;
        }
    }

    cout << "The " << N << "th term of Fibonacci series is: " << nth << endl;
    return 0;
}
