#include <iostream>

// Функция для вычисления произведения цифр числа
int productOfDigits(int num) {
    int product = 1;
    while (num != 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

// Функция для проверки, является ли число Цукермана
bool isCukermanNumber(int num) {
    return (num % productOfDigits(num)) == 0;
}

// Функция для вывода чисел Цукермана в заданном интервале
void printCukermanNumbers(int start, int end) {
    std::cout << "Числа Цукермана в интервале [" << start << ", " << end << "]: ";
    for (int i = start; i <= end; ++i) {
        if (isCukermanNumber(i)) {
            std::cout << i << " ";
        }
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

    return 0;
}
