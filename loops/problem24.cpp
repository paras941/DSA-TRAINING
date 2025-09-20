#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 0; i < N; i++)
        sum += 2*i + 1;

    cout << "Sum of first " << N << " odd natural numbers: " << sum << endl;
    return 0;
}
