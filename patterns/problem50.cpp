#include <iostream>

int main() {
    int height = 5; // You can change this value for a different size

    // Loop for each row
    for (int i = 1; i <= height; ++i) {
        
        // 1. Loop to print leading spaces
        // For row 'i', we need 'height - i' spaces.
        for (int j = 0; j < height - i; ++j) {
            std::cout << " ";
        }

        // 2. Loop to print the stars
        // For row 'i', we need 'i' stars.
        for (int k = 0; k < i; ++k) {
            std::cout << "*";
        }
        
        // Move to the next line
        std::cout << std::endl;
    }
    
    return 0;
}