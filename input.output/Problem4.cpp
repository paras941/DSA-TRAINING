// 4. Write a program to calculate volume of a cuboid.
#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;

    // Input from user
    cout << "Enter length of cuboid: ";
    cin >> length;
    cout << "Enter width of cuboid: ";
    cin >> width;
    cout << "Enter height of cuboid: ";
    cin >> height;

    // Calculate volume
    volume = length * width * height;

    // Display result
    cout << "Volume of the cuboid = " << volume << endl;

    return 0;
}
