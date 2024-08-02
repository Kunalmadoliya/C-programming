#include <iostream>

// Namespace: A way to group code into separate areas to avoid name conflicts.

namespace first {
    int x = 8;
}

namespace second {
    int x = 5;
}

int main() {
    using namespace first;

    std::cout << x << '\n';
    std::cout << second::x << '\n';

    return 0;
}
