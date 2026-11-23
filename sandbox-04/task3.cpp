#include <iostream>

// Повертає кількість днів у місяці m (рік невисокосний)
int days_in_month(int m) {
    switch (m) {
    case 2:
        // лютий: у невисокосному році 28 днів
        return 28;
    case 4:
    case 6:
    case 9:
    case 11:
        // квітень, червень, вересень, листопад: 30 днів.
        // Між case немає break, тому switch "провалюється"
        // до спільного return 30
        return 30;
    default:
        // усі інші місяці (1, 3, 5, 7, 8, 10, 12): 31 день
        return 31;
    }
}

int main() {
    // очікуваний вивід: 28 30 31
    std::cout << days_in_month(2) << ' ' << days_in_month(4) << ' ' << days_in_month(12) << '\n';
}