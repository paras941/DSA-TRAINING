#include <iostream>
using namespace std;

int main() {
    int n = 7;   // fixed size like the reference
    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (
                (j == 0 && i <= mid) ||            // left vertical (top half)
                (j == n - 1 && i >= mid) ||        // right vertical (bottom half)
                (i == 0 && j >= mid) ||            // top horizontal (right half)
                (i == n - 1 && j <= mid) ||        // bottom horizontal (left half)
                (i == mid) ||                      // full middle row
                (j == mid)                         // full middle column
            ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}