#include <iostream>

int main() {
    int n = 5; // Determines the size of the pattern
    int height = 2 * n - 1;
    int width = 2 * n;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            // These conditions identify the six lines that make up the shape
            if (j == 0 ||                                    // Left vertical line
                j == width - 1 ||                             // Right vertical line
                (i < n && (j == i || j == width - 1 - i)) ||  // Top 'V' diagonals
                (i >= n && (j == height - 1 - i || j == width - 1 - (height - 1 - i)))) { // Bottom 'V' diagonals
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}