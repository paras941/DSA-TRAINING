#include <iostream>

int main() {
    int n = 5; // Number of rows for the pyramid

    // Outer loop for each row
    for (int i = 1; i <= n; ++i) {
        
        // 1. Loop to print the leading spaces
        for (int space = 0; space < n - i; ++space) {
            std::cout << " "; 
        }

        // 2. Loop to print the numbers
        for (int j = 1; j <= i; ++j) {
            std::cout << j << " "; 
        }
        
        // Move to the next line
        std::cout << std::endl;
    }
    
    return 0;
}