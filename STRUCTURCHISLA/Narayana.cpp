#include <iostream>

const int MAX_ROWS = 5;

int main() {
    // Функция для вычисления чисел Нараяны
    int narayana_triangle[MAX_ROWS][MAX_ROWS] = {0};
    narayana_triangle[0][0] = 1;

    for (int n = 1; n < MAX_ROWS; ++n) {
        for (int k = 1; k <= n; ++k) {
            narayana_triangle[n][k] = narayana_triangle[n - 1][k - 1] + narayana_triangle[n - 1][k] + narayana_triangle[n - 1][k + 1];
        }
    }

    // Вывод чисел Нараяны
    for (int n = 0; n < MAX_ROWS; ++n) {
        for (int k = 0; k <= n; ++k) {
            std::cout << narayana_triangle[n][k] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
