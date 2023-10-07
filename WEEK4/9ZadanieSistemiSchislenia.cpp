#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int charToInt(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    } else if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }
    return -1;
}

int convertToDecimal(string num, int base) {
    int decimalNum = 0;
    int power = 0;

    for (int i = num.length() - 1; i >= 0; i--) {
        int digit = charToInt(num[i]);
        if (digit == -1 || digit >= base) {
            cout << "Ошибка: недопустимая цифра в числе." << endl;
            return -1;
        }
        decimalNum += digit * pow(base, power);
        power++;
    }

    return decimalNum;
}

string convertFromDecimal(int num, int newBase) {
    string result = "";

    while (num > 0) {
        int remainder = num % newBase;
        char digitChar = (remainder < 10) ? ('0' + remainder) : ('A' + remainder - 10);
        result = digitChar + result;
        num /= newBase;
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "ru-RU");
    string inputNum;
    int oldBase, newBase;

    cout << "Введите число: ";
    cin >> inputNum;
    cout << "Введите текущую систему счисления (от 2 до 16): ";
    cin >> oldBase;
    cout << "Введите новую систему счисления (от 2 до 16): ";
    cin >> newBase;

    int decimalNum = convertToDecimal(inputNum, oldBase);

    if (decimalNum != -1) {
        string result = convertFromDecimal(decimalNum, newBase);
        cout << "Результат: " << result << endl;
    }

    return 0;
}
