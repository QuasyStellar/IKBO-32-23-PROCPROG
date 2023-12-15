#include <iostream>
#include <cmath>

using namespace std;

int charToInt(char symbol) {
	switch (symbol) {
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


string convert(string num) {
	int decimalNum = 0;
	int power = 0; 
	string result = "";
	for (int i = num.length() - 1; i >= 0; i--) {
		int digit = charToInt(num[i]);
		if (digit == -1 or digit >= 3) {
			return "Недопустимая цифра в числе";
		}
		decimalNum += digit * pow(3, power);
		power++;
	}
	if (decimalNum == 0) {
		return "0";
	}
	while (decimalNum > 0) {
		int remainder = decimalNum % 6;
		char digit = intTochar(remainder);
		if (digit == '-1') {
			return  "Ошибка: недопустимая цифра в числе.";
		}
		result = intTochar(remainder) + result;
		decimalNum /= 6;
	}

	return result;
}



int main() {
    setlocale(LC_ALL, "");
	int n;
	cout << "Введите кол-во чисел: ";
	cin >> n;
	cout << "Вводите троичные числа:\n";
	string *F3 = new string[n];
	string* F6 = new string[n];
	for (int i = 0; i <n; i++){
		cin >> F3[i];
    }
	for (int i = 0; i < n; i++) {
		F6[i] = convert(F3[i]);
	}
	cout << "Массив F в 3 системе\n";
	for (int i = 0; i < n; i++) {
		cout << F3[i] << " ";
	}
	cout << "\nМассив F в 6 системе\n";
	for (int i = 0; i < n; i++) {
		cout << F6[i] << " ";
	}
}
