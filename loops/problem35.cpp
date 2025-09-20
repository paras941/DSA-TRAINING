#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int hcf = (a < b) ? a : b;
    while(hcf > 0) {
        if(a % hcf == 0 && b % hcf == 0)
            break;
        hcf--;
    }

    cout << "HCF = " << hcf << endl;
    return 0;
}
