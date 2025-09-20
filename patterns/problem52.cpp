#include <iostream>

int main() {
    int n = 5;
    for (int i = 0; i < n; ++i) {
        // Loop for leading spaces
        for (int j = 0; j < i; ++j) {
            std::cout << "  ";
        }
        // Loop for stars
        for (int j = 0; j < n - i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}