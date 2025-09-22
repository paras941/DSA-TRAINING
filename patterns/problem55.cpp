#include <iostream>

int main() {
    int n = 5; 
    int height = 2 * n - 1;
    int width = 2 * n;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j){
            if (j == 0 ||                                   
                j == width - 1 ||                             
                (i < n && (j == i || j == width - 1 - i)) ||  
                (i >= n && (j == height - 1 - i || j == width - 1 - (height - 1 - i)))) { 
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}