#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int charToInt(char symbol) {
	switch (symbol){
	case '0': return 0; break;
	case '1': return 1; break;
	case '2': return 2; break;
	case '3': return 3; break;
	case '4': return 4; break;
	case '5': return 5; break;
	case '6': return 6; break;
	case '7': return 7; break;
	case '8': return 8; break;
	case '9': return 9; break;
	case 'A': return 10; break;
	case 'B': return 11; break;
	case 'C': return 12; break;
	case 'D': return 13; break;
	case 'E': return 14; break;
	case 'F': return 15; break;
	}
	return -1;
}


char intTochar(int symbol) {
	switch (symbol) {
	case 0: return '0'; break;
	case 1: return '1'; break;
	case 2: return '2'; break;
	case 3: return '3'; break;
	case 4: return '4'; break;
	case 5: return '5'; break;
	case 6: return '6'; break;
	case 7: return '7'; break;
	case 8: return '8'; break;
	case 9: return '9'; break;
	case 10: return 'A'; break;
	case 11: return 'B'; break;
	case 12: return 'C'; break;
	case 13: return 'D'; break;
	case 14: return 'E'; break;
	case 15: return 'F'; break;
	}
	return '-1';
}

int convertToDecimal(string num, int base) {
    int decimalNum = 0;
    int power = 0;

    for (int i = num.length() - 1; i >= 0; i--) {
        int digit = charToInt(num[i]);
        if (digit == -1 or digit >= base) {
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
		char digit = intTochar(remainder);
		if (digit ==  '-1') {
			return  "Ошибка: недопустимая цифра в числе.";
		}
        result = intTochar(remainder) + result;
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
