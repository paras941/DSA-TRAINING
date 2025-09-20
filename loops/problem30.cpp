#include <iostream>
using namespace std;

int main() {
    int a, b, max;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    max = (a > b) ? a : b;

    while(true) {
        if(max % a == 0 && max % b == 0)
            break;
        max++;
    }

    cout << "LCM = " << max << endl;
    return 0;
}
