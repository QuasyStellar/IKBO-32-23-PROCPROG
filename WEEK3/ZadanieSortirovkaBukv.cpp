#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string str;
	bool flag = 1;
	cout << "Введите строку из 30 букв: ";    //dfghrtyrjtlkejlkdfjglkjdfgjkhy пример строки
	cin >> str;
	if (str.size() == 30) {
		for (int i = 0; i < str.size(); i++) {
			if (!isalpha(str[i])) {
				flag = 0;
			}
		}
		if (flag) {
			sort(str.begin(), str.end());
			cout << str;
		}
		else{
			cout << "В строке не только буквы";
		}
	}
	else {
		cout << "Длина строки не 30 символов";
	}
}
