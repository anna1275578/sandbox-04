#include <iostream>

int days_in_month(int m) {
    switch (m) {
    case 2:
        return 28;
    case 4:
    case 6:
        // ... додай решту місяців з 30 днями
        return 30;
    default:
        return 31;
    }
}

int main() {
    std::cout << days_in_month(2) << ' ' << days_in_month(4) << ' ' << days_in_month(12) << '\n';
}