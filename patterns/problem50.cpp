#include <iostream>

int main() {
    int height = 5; 
    for (int i = 1; i <= height; ++i) {
        
        for (int j = 0; j < height - i; ++j) {
            std::cout << " ";
        }

    
        for (int k = 0; k < i; ++k) {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }
    
    return 0;
}