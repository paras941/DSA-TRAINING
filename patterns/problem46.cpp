#include <iostream>

int main() {
    int height = 7;
    int width = 13; // Adjusted width to accommodate all stars and spaces

    for (int i = 0; i < height; ++i) { // Loop for rows
        for (int j = 0; j < width; ++j) { // Loop for columns
            bool print_star = false;

            // Row 0: "* ******"
            if (i == 0) {
                if (j == 0 || (j >= 7 && j <= 12)) { // * at col 0, and * from col 7 to 12
                    print_star = true;
                }
            }
            // Rows 1 and 2: "* *"
            else if (i == 1 || i == 2) {
                if (j == 0 || j == 7) { // * at col 0 and * at col 7
                    print_star = true;
                }
            }
            // Row 3: "**********"
            else if (i == 3) {
                if (j >= 0 && j <= 9) { // * from col 0 to 9
                    print_star = true;
                }
            }
            // Rows 4 and 5: "       * *"
            else if (i == 4 || i == 5) {
                if (j == 7 || j == 12) { // * at col 7 and * at col 12
                    print_star = true;
                }
            }
            // Row 6: "***** *"
            else if (i == 6) {
                if ((j >= 0 && j <= 4) || j == 12) { // * from col 0 to 4, and * at col 12
                    print_star = true;
                }
            }

            if (print_star) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}