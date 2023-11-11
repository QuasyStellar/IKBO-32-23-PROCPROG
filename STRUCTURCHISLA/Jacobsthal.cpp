#include <iostream>

// Функция для вычисления числа Якобсталя
int Jacobsthal(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2);
}

int main() {
    int start, end;

    // Ввод интервала
    std::cout << "Введите начальное значение интервала: ";
    std::cin >> start;
    std::cout << "Введите конечное значение интервала: ";
    std::cin >> end;

    // Вывод чисел Якобсталя в заданном интервале
    for (int i = start; i <= end; ++i) {
        std::cout << Jacobsthal(i) << " ";
    }

    return
      0;
}
