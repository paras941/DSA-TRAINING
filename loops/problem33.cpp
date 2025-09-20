#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int a = 0, b = 1, next;
    cout << "First " << N << " terms: ";

    for(int i = 1; i <= N; i++) {
        if(i == 1) next = a;
        else if(i == 2) next = b;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        cout << next << " ";
    }

    cout << endl;
    return 0;
}
