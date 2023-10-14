#include <iostream>
#include <string>
using namespace std;

int romanToNumber(char romanChar) {
    switch (toupper(romanChar)) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default:  return 0;
    }
}

int main() {
    setlocale(LC_ALL, "ru-RU");
    int decimal = 0, prevValue = 0, count = 1;
    bool isValid = true, isVichet = false;
    string input;

    cout << "Введите римское число: ";
    cin >> input;

    for (int i = input.length() - 1; i >= 0; i--) {
        int currentValue = romanToNumber(input[i]);

        if (currentValue == 0) {
            isValid = false;
            break;
        }

        if (currentValue < prevValue) {
            isVichet = true;
            if ((prevValue / currentValue != 10 and prevValue / currentValue != 5) or (currentValue != 1 and currentValue != 10 and currentValue != 100)) {
                isValid = false;
                break;
            }
            if (count > 1) {
                isValid = false;
                break;
            }
        }

        if (currentValue == prevValue) {
            count++;
            if (count > 3 or currentValue == 5 or currentValue == 50 or isVichet) {
                isValid = false;
                break;
            }
        }
        else {
            isVichet = 0;
            count = 1;
        }

        if (currentValue < prevValue) {
            decimal -= currentValue;
        }
        else {
            decimal += currentValue;
        }
        prevValue = currentValue;
    }

    if (!isValid) {
        cout << "Неверный формат римского числа." << endl;
    }
    else {
        cout << "Результат перевода: " << decimal << endl;
    }
}
