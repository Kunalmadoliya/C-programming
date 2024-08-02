#include <iostream>

// Type Conversion: Changing a value from one data type to another, either implicitly or explicitly.

namespace dub {
    int x = (double) 3.14;  // Explicitly casting a double to an int
}

int main() {
    using namespace dub;

    double x = (int) 3.14;  // Explicitly casting an int to a double

    int a = 3.14;  // Implicit conversion from double to int (truncates the decimal part)
    int y = 5.30;  // Implicit conversion from double to int (truncates the decimal part)

    float z = a + y;  // Implicit conversion from int to float

    std::cout << z << '\n';
    std::cout << x << '\n';
    std::cout << x;

    return 0;
}
