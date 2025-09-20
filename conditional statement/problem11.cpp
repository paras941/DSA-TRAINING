#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Input three characters
    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;

    // Display characters with ASCII codes
    cout << ch1 << " -> ASCII: " << int(ch1) << endl;
    cout << ch2 << " -> ASCII: " << int(ch2) << endl;
    cout << ch3 << " -> ASCII: " << int(ch3) << endl;

    return 0;
}
