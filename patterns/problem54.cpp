#include <iostream>

int main() {
    int n = 5; 


    for (int i = 1; i <= n; ++i) {
        

        for (int space = 0; space < n - i; ++space) {
            std::cout << " "; 
        }

        for (int j = 1; j <= i; ++j) {
            std::cout << j << " "; 
        }
        
        
        std::cout << std::endl;
    }
    
    return 0;
}