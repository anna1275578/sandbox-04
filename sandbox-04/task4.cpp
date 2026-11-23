#include <iostream>

bool every_third() {
    static int calls = 0;
    calls = calls + 1;
    if (calls == 3) {
        calls = 0;
        return true;
    }
    return false;
}

int main() {
    for (int i = 0; i < 7; ++i) {
        std::cout << every_third() << ' ';
    }
    std::cout << '\n';
}