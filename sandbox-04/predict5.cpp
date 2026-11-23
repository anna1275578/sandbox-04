#include <cstdint>
#include <iostream>
int main() {
    int count = 0;
    for (std::uint8_t i = 0; i < 256; ++i) {
        count = count + 1;
    }
    std::cout << count << '\n';
}