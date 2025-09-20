#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if(a == b && b == c)
        cout << "Triangle is Equilateral" << endl;
    else if(a == b || b == c || a == c)
        cout << "Triangle is Isosceles" << endl;
    else
        cout << "Triangle is Scalene" << endl;

    return 0;
}
