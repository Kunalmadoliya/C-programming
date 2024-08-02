#include <iostream>
#include <vector>

// 'typedef' and 'using' are ways to create type aliases, making code easier to read and manage.

typedef std::string type_t;  // 'type_t' is an alias for 'std::string'
typedef int num;            // 'num' is an alias for 'int'

using type_t = std::string; // 'type_t' is an alias for 'std::string' (alternative syntax)
using num = int;           // 'num' is an alias for 'int' (alternative syntax)

int main() {
    type_t name = "kunal";
    num x = 10;

    std::cout << name << '\n';
    std::cout << x;

    return 0;
}
