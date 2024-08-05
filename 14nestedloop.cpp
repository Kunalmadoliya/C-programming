#include <iostream>

// The outer loop runs for each row, and the inner loop runs for each column within that row.

int main() {

    int rows;
    int columns;

    std::cout << "how many rows :";
    std::cin >> rows;

    std::cout << "how many columns :";
    std::cin >> columns;

    for(int i = 0; i < rows; i++) {       
        for(int j = 0; j < columns; j++) { 
            std::cout << columns ;
        }
        std::cout << '\n';
    }

    return 0;
}
