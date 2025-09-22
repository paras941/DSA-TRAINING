#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Armstrong numbers under 1000: ";
    for(int num = 1; num < 1000; num++) {
        int sum = 0, temp = num, digits = 0;

        int t = num;
        while(t != 0) {
            digits++;
            t /= 10;
        }
        while(temp != 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if(sum == num)
            cout << num << " ";
    }
    cout << endl;
    return 0;
}
