#include <iostream>
#include <vector>

// Функция для вычисления числа Цукермана
int cukermanNumber(int n, std::vector<int>& memo) {
    if (n == 0) return 1;
    
    if (memo[n] != -1) {
        return memo[n];
    }
    
    int result = 0;
    for (int k = 0; k < n; ++k) {
        result += cukermanNumber(k, memo) * cukermanNumber(n - 1 - k, memo);
    }
    
    memo[n] = result;
    return result;
}

// Функция для вывода чисел Цукермана в заданном интервале
void printCukermanNumbers(int start, int end) {
    std::vector<int> memo(end + 1, -1);

    std::cout << "Числа Цукермана в интервале [" << start << ", " << end << "]: ";
    for (int i = start; i <= end; ++i) {
        std::cout << cukermanNumber(i, memo) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int start, end;

    // Ввод интервала
    std::cout << "Введите начальное значение интервала: ";
    std::cin >> start;
    std::cout << "Введите конечное значение интервала: ";
    std::cin >> end;

    // Вывод чисел Цукермана в заданном интервале
    printCukermanNumbers(start, end);

    retu
      rn 0;
}
