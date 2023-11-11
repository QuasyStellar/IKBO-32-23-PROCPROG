#include <iostream>

long long narayana_number(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return narayana_number(n - 1, k - 1) + narayana_number(n - 1, k);
}

void print_narayana_triangle(int m, int n) {
    for (int i = m; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << narayana_number(i, j) << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int m, n;

    std::cout << "Введите начальное значение m: ";
    std::cin >> m;

    std::cout << "Введите конечное значение n: ";
    std::cin >> n;

    std::cout << "Треугольник Нараяны в интервале [" << m << ", " << n << "]:\n";
    print_narayana_triangle(m, n);

    retu
      rn 0;
}
