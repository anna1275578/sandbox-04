#include <iostream>

int main() {
    for (unsigned i = 11; i-- > 0; ) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}